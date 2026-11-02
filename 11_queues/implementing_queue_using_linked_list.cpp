#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class queue{
    public:
    Node* f;
    Node* b;
    int count;
    queue(int val){
        Node* x=new Node(val);
        f=b=x;
        count=1;
    }
    void push(int val){
        Node* x=new Node(val);
        x->next=NULL;
        b->next=x;
        b=b->next;
        count++;
    }
    void pop(){
        f=f->next;
        count--;
    }
    int front(){
        return f->val;
    }
    int back(){
        return b->val;
    }
    bool empty(){
        if(count==0) return true;
        else return false;
    }
    int size(){
        return count;
    }
    void display(){
        Node* temp=f;
        while(temp!=b->next){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    queue q(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    q.display();
}
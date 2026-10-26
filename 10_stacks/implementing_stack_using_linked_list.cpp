#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node* head;
    int count;
    Stack(){
        this->head=NULL;
        count=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        count++;
    }
    void pop(){
        if(head==NULL) cout<<"stack is empty\n";
        else{
            head=head->next;
            count--;
        }
    }
    int size(){
        return count;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty\n";
            return -1;
        }
        else {
            return head->val;
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top()<<endl;
    s.display();

}
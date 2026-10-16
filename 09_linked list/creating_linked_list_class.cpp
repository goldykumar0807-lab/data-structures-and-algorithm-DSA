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
class Linkedlist{
    public:
    Node* head;
    Linkedlist(Node* head){
        this->head=head;
    }
    //function for displaying elements of linked list.
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        return;
    }
    //function for calculating length of linked list.
    int length(){
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
    //function for inserting element at tail.
    void insert_at_end(int a){
        Node* e=new Node(a);
        e->next=NULL;
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=e;
        return;
    }
    //function for inserting element at head.
    void insert_at_head(int a){
        Node* x=new Node(a);
        x->next=head;
        this->head=x;
    }
    //function for inserting element at any index.
    void insert_at_index(int idx,int a){
        Node* x=new Node(a);
        x->next=NULL;
        Node* temp=head;
        int k=0;
        while(k<idx-1){
            temp=temp->next;
            k++;
        } 
        Node* save=temp->next;
        temp->next=x;
        x->next=save;
        return;
    }
    int get_element(int idx){
        int k=0;
        Node* temp=head;
        while(k<idx){
            temp=temp->next;
            k++;
        }
        return temp->val;
    }
};
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    Linkedlist LL(a);
    LL.display();
    cout<<endl;
    cout<<"length of linked list is : "<<LL.length();
    LL.insert_at_end(50);
    cout<<endl;
    LL.display();
    LL.insert_at_head(0);
    cout<<endl;
    LL.display();
    cout<<endl;
    LL.insert_at_index(3,50);
    LL.display();
    cout<<endl;
    cout<<"element at index 3 : "<<LL.get_element(3);
}
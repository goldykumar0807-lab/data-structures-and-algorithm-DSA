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
void display(Node &a){
    Node* temp=&a;
    while(1){
        cout<<temp->val<<" ";
        if(temp->next==NULL) break;
        temp=temp->next; //temp is a pointer it will store the address of node.
    }
}
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    display(a);
}

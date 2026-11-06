#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
void print(Node* root,int n){
    if(root==NULL) {
        return;
    }
    if(n==1){
        cout<<root->val<<" ";
        return;
    }
    n--;
    print(root->left,n);
    print(root->right,n);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(7);
    Node* c=new Node(9);
    Node* d=new Node(2);
    Node* e=new Node(6);
    Node* f=new Node(9);
    Node* g=new Node(5);
    Node* h=new Node(11);
    Node* i=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    e->left=g;
    e->right=h;
    f->left=i;
    int n;
    cout<<"enter level : ";
    cin>>n;
    print(a,n);
}
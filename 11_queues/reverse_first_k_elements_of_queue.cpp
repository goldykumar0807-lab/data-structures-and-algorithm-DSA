//input=[3 4 5 6 2 1] for k=2 
//output=[4 3 5 6 2 1]
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    int n;
    cout<<"enter size of queue : ";
    cin>>n;
    //take elements input
    cout<<"enter elements of queue : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int> st;
    int k;
    cout<<"enter value of k : ";
    cin>>k;
    for(int i=0;i<k;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    int x=q.size();
    cout<<"resultant queue is : ";
    for(int i=0;i<x;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}
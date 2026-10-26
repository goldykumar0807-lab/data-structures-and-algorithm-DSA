#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void push_at_any_index(stack<int> &st, int idx, int val){
    stack<int> temp;
    int n=st.size();
    for(int i=1;i<n-idx;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    push_at_any_index(st,2,50);
    display(st);
}
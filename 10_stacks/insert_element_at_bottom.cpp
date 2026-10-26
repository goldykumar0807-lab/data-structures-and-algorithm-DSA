#include<iostream>
#include<stack>
using namespace std;
void push_at_bottom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void display(stack<int> &st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    push_at_bottom(st,0);
    display(st);
}
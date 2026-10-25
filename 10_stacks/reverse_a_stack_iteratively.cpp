#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st=temp;
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
    reverse(st);
    display(st);

}

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    stack<int> temp;
    while(st.size()!=0){
        int x=st.top();
        cout<<st.top()<<" ";
        st.pop();
        temp.push(x);
    }
    st=temp;

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<endl;
    display(st);
}
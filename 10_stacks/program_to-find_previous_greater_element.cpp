#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans(n);
    stack<int> st;
    ans[0]=-1;
    st.push(v[0]);
    for(int i=1;i<n;i++){
        while(st.size()!=0 && st.top()<=v[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(v[i]);
    }
    display(v);
    display(ans);
}
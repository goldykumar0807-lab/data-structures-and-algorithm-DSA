#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enetr size of array : ";
    cin>>n;
    vector<int> v(n);
    stack<int> st;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans(n);
    ans[n-1]=-1;
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()!=0 && st.top()<=v[i]) {
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(v[i]);
    }
    display(v);
    cout<<"next greater element array is "<<endl;
    display(ans);
}
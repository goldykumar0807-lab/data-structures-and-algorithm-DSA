#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void display(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<arr.size();i++) cin>>arr[i];
    vector<int> pgi(n);
    stack<int> st;
    pgi[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()!=0 && arr[st.top()]<=arr[i]) st.pop();
        pgi[i]=st.top();
        st.push(i);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x=i-pgi[i];
        ans.push_back(x);
    }
    display(arr);
    cout<<endl;
    cout<<"stock span : ";
    display(ans);
}
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v,int n,int idx){
    if(idx==n) return;
    cout<<v[n-idx-1]<<" ";
    reverse(v,n,idx+1);
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v,n,0);
}

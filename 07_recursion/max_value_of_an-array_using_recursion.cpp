#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max(vector<int> &v, int n, int idx,int max1){
    if(idx==n) return max1;
    if(v[idx]>max1) max1=v[idx];
    max(v,n,idx+1,max1);
}
int main(){
    int n;
    cout<<"enter no of terms : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<max(v,n,0,INT_MIN);
}

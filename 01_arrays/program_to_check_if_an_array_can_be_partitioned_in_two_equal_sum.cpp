#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of vector : ";
    for(int i=0;i<n;i++) cin>>v[i];
    //prefix sum of array
    for(int i=1;i<n;i++) v[i]+=v[i-1];
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*v[i]==v[n-1]){
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"yes array can be partitioned from index : "<<idx;
    else cout<<"array cannot be partitioned.";

}
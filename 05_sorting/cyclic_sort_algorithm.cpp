//where to use this --> for arrays like [0,n] & [1,n] time complexity O(n).
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of vector : ";
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        swap(v[i],v[v[i]]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
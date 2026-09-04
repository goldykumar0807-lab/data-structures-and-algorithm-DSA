#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v, int n, int idx){
    if(idx==n) return;
    cout<<v[idx]<<" ";
    display(v,n,idx+1);
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
    display(v,n,0);
}

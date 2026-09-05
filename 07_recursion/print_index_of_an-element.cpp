#include<iostream>
#include<vector>
using namespace std;
int print(vector<int> &v,int n,int idx,int ele){
    if(ele==v[idx]) return idx;
    if(idx==n) return-1;
    print(v,n,idx+1,ele);

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
    int ele;
    cout<<"enter element to know its index : ";
    cin>>ele;
    cout<<print(v,n,0,ele);
}

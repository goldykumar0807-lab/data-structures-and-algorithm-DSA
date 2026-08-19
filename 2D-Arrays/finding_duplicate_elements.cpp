#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter size of array : ";
    cin>>x;
    vector<int> v;
    cout<<"enter elements of array : ";
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool flag=false;
    int idx=-1;
    for(int i=0;i<x && flag==false;i++){
        for(int j=0;j<x;j++){
            if(v[i]==v[j] && i!=j){
                flag=true;
                idx=i;
                break;
            }
        }
    }
    if(flag) cout<<"duplicate element is : "<<v[idx];
}

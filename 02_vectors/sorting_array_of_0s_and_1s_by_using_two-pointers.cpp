#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
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
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        else if(v[i]==1 && v[j]==1){
            j--;
        }
        else i++;
    }
    display(v);
}

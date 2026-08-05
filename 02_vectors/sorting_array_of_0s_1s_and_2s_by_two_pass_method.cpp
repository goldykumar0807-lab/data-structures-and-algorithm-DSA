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
    int count1=0; //count no of zeros.
    int count2=0; //count no of 1s.
    for(int i=0;i<n;i++){
        if(v[i]==0) count1++;
        if(v[i]==1) count2++;
    }
    for(int i=0;i<n;i++){
        if(i<count1) v[i]=0;
        if(i>=count1 && i<count1+count2) v[i]=1;
        if(i>=count1+count2) v[i]=2;
    }
    display(v);
}

#include<iostream>
using namespace std;
int sum(int i,int n){
    if(i>n) return 0;
    return i+sum(i+1,n);
}
int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    cout<<sum(1,n);
}

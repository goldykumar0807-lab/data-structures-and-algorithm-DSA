#include<iostream>
using namespace std;
int ways(int current,int n){
    if(current>n) return 0;
    if(current==n) return 1;
    return ways(current+1,n)+ways(current+2,n);
}
int main(){
    int n;
    cout<<"enter no of stairs : ";
    cin>>n;
    cout<<"no of ways : "<<ways(0,n);
}

/*Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
steps at each level.*/
#include<iostream>
using namespace std;
int ways(int current,int n){
    if(current==n) return 1;
    if(current>n) return 0;
    return ways(current+1,n)+ways(current+2,n)+ways(current+3,n);
}
int main(){
    int n;
    cout<<"enter no of stairs : ";
    cin>>n;
    cout<<"no of ways : "<<ways(0,n);
}

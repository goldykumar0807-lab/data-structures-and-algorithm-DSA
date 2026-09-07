#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    int x=b%a;
    if(x==0) return a;
    return gcd(x,a);
}
int main(){
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<gcd(a,b);
}

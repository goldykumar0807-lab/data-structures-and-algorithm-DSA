#include<iostream>
using namespace std;
int exponent(int a,int b){
    if(b==0) return 1;
    return a*exponent(a,b-1);
}
int main(){
    int a;
    cout<<"enter value of base : ";
    cin>>a;
    int b;
    cout<<"enter exponent : ";
    cin>>b;
    cout<<exponent(a,b);
}

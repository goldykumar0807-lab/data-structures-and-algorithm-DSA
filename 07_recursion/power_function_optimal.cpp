#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return pow(a,b/2)*pow(a,b/2);
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"enter value of base : ";
    cin>>a;
    int b;
    cout<<"enter value of exponent : ";
    cin>>b;
    cout<<pow(a,b);
}

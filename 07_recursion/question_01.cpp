/*Write a program to calculate the sum of odd numbers between a and b (both inclusive) using 
recursion.*/
#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;
    if(a%2==0) return sum(a+1,b);
    return a+sum(a+2,b);
}
int main(){
    int a,b;
    cout<<"enter value of a and b : ";
    cin>>a>>b;
    cout<<sum(a,b);
}

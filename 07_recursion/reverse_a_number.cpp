/*Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number*/
#include<iostream>
#include<string>
using namespace std;
int reverse(int n,string v){
    if(n==0) {
        int x=stoi(v);
        return x;
    }
    int last_digit=n%10;
    v+=to_string(last_digit);
    n=n/10;
    return reverse(n,v);
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    string v;
    cout<<reverse(n,v);
}

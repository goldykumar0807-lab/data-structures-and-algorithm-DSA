/*Given a positive integer, return true if it is a power of 2.*/
#include<iostream>
using namespace std;
bool check(int n){
    if(n==1) return true;
    if(n%2==0){
        n/=2;
        return check(n);
    }
    return false;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    check(n);
    if(check(n)==1) cout<<"true";
    else cout<<"false";
}

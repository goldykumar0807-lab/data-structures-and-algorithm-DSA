/*Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
steps at each level.*/
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

#include<iostream>
using namespace std;
void zig_zag(int n){
    if(n==0) return;
    cout<<n<<" ";
    zig_zag(n-1);
    cout<<n<<" ";
    zig_zag(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    zig_zag(n);
}

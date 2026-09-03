#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    print(i+1,n);
    cout<<n-i+1<<endl;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    print(1,n);
}

#include<iostream>
using namespace std;
void print(int i,int n){
    cout<<i<<endl;
    if(i==n) return;
    print(i+1,n);
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    print(1,n);
}

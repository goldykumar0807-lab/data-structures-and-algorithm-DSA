#include<iostream>
using namespace std;
void print(int n){
    cout<<n<<endl;
    if(n==1) return;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    print(n);
}

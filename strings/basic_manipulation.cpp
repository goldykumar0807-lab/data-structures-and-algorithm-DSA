#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word : ";
    cin>>s;
    cout<<s<<endl;
    int i;
    cout<<"enter index of element you want to change : ";
    cin>>i;
    cout<<s[i]<<endl;
    char x;
    cout<<"enter new character : ";
    cin>>x;
    s[i]=x;
    cout<<s;
}

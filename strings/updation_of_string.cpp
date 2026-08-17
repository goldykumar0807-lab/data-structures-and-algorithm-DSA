#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2!=0) s[i]='#';
    }
    cout<<s;
}

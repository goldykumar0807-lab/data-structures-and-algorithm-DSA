//input a string and concatenate with the reverse of string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int n=s.size();
    string v;
    v.resize(n);
    for(int i=0;i<s.size();i++){
        v[i]=s[n-1-i];
    }
    string t=s+v;
    cout<<t;
    
}

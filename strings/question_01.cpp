//input a string and return the no of times the neighbouring characters are different from each other.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int count=0;
    int n=s.size();
    for(int i=0;i<s.size();i++){
    if(i==0 && s[i]!=s[i+1]) count++;
    else if(i<n-1 && s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
    else if(i==n-1 && s[i]!=s[i-1]) count++;
    }
    cout<<count;
}

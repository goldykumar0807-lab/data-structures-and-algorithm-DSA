#include<iostream>
#include<string>
using namespace std;
string palindrome(string s, int i,int j){
    if(i>=j) return "yes";
    if(s[i]!=s[j]) return"no";
    return palindrome(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"enter a string : ";
    cin>>s;
    cout<<palindrome(s,0,s.size()-1);
}

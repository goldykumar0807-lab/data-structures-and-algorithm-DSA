#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string skip(string s, char ch, int n, int idx, string s1){
    if(idx==n) return s1;
    if(s[idx]!=ch) s1.push_back(s[idx]);
    return skip(s,ch,n,idx+1,s1);
    
}
int main(){
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    char ch;
    cout<<"enter character you want to remove : ";
    cin>>ch;
    int n=s.size();
    cout<<skip(s,ch,n,0,"");

}

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s;
    cout<<"enter a string name s : ";
    cin>>s;
    sort(s.begin(),s.end());
    string t;
    cout<<"enter a string name t : ";
    cin>>t;
    sort(t.begin(),t.end());
    bool flag=true;
    for(int i=0;i<(min(s.size(),t.size()));i++){
        if(s[i]!=t[i]) flag=false;
    }
    if(flag) cout<<"s is an anagram of t.";
    else cout<<"s is not an anagram of t."; 
}

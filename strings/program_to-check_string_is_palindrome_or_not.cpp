#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int n=s.size();
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[n-i-1]) {
          flag=false;
            break;
        }
    }
    if(flag) cout<<"string is plaindrome.";
    else cout<<"string is not plaindrome.";
    
}

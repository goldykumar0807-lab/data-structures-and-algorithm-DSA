#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='i' || s[i]=='e' || s[i]=='u' ) continue;
        else count++;
    }
    cout<<"no of consonants : "<<count;
}

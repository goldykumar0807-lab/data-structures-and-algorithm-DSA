#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word in lowercase : ";
    cin>>s;
    int length;
    length=s.length();
    int count=0;
    for(int i=0;i<length;i++){
        if((s[i]=='a') || ( s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u') ) count++;
        }
        cout<<"no of vowels in string is : "<<count;
}

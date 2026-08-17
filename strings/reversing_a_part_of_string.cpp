#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a word with even no of characters : ";
    cin>>s;
    int n=s.size();
    reverse(s.begin(),s.begin()+(n/2));
    cout<<s;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(i%2==0) s[i]='o';
    }
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s+s<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}

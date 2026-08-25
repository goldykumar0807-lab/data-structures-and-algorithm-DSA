//a string consist of lowercase characters print the character that is occuring most no of times.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int n=s.size();
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        int x=(int)(s[i]-97);
        if(v[x]==0) v[x]=1;
        else v[x]+=1;
    }
    int max=0;
    char ch;
    for(int i=0;i<26;i++){
        if(v[i]>max) {
            max=v[i];
            ch=(char)(i+97);
        }
    }
    cout<<"element with max occurence is : "<<ch<<" "<<max;

}

//sort a string in decreasing order of values associated after removal of values smaller than x.
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int n;
    n=s.size();
    char ch;
    cout<<"enter target character : ";
    cin>>ch;
    string s1;
    for(int i=0;i<n;i++){
        if((int)s[i]>=(int)ch){
            s1.push_back(s[i]);
        }
    }
    int n1=s1.size();
    for(int i=0;i<n1-1;i++){
        bool flag=true;
        for(int j=0;j<n1-i-1;j++){
            if((int)s1[j]<(int)s1[j+1]){
                swap(s1[j],s1[j+1]);
                flag=false;
            }
        }
        if(flag) break;
    }
    cout<<s1;

}

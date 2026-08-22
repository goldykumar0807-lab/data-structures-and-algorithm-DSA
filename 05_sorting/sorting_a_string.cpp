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
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if((int)s[j]>(int)s[j+1]){
              swap(s[j],s[j+1]);
              flag=false;
            }
        }
        if(flag) break;
    }
    cout<<s;

}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void print(string s,int idx,vector<string> &v,string s1){
    if(idx==s.length()){
        v.push_back(s1);
        return;
    }
    s1.push_back(s[idx]);
    print(s,idx+1,v,s1);
    s1.pop_back();
    print(s,idx+1,v,s1);
}
int main(){
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    vector<string> v;
    print(s,0,v,"");
    int n1=v.size();
    for(int i=0;i<n1;i++){
        cout<<v[i]<<endl;
    }
}

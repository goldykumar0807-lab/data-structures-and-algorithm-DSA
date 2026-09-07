#include<iostream>
#include<string>
using namespace std;
void generate(int n,string s){
    if(s.length()==n){
        cout<<s;
        cout<<endl;
        return;
    }
    s.push_back('0');
    generate(n,s);
    s.pop_back();
    if(s.length()==0 || s[s.length()-1]=='0'){
        s.push_back('1');
        generate(n,s);
        s.pop_back();
    }
}
int main(){
    int n;
    cout<<"enter length of string : ";
    cin>>n;
    generate(n,"");
}

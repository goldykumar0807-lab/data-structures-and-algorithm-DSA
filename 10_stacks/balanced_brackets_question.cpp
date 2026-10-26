#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
bool is_balanced(string s){
      if(s.size()%2!=0) return false;
    stack<int> temp;
    for(int i=0;i<s.size();i++){
        if(temp.size()==0) {
            if(s[i]==')') return false;
            temp.push(s[i]);
        }
        else{
            if(temp.top()==')') return false;
            else if(temp.top()=='(' && s[i]==')') temp.pop();
            else temp.push(s[i]);
        }
        
    }
    if(temp.size()!=0) return false;
    else return true;

}
int main(){
    string s;
    cout<<" enter a string of brackets : ";
    cin>>s;
    cout<<is_balanced(s);

}
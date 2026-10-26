#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
void remove(string s){
    stack<int> temp;
    string p;
    temp.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(temp.top()==s[i]) continue;
        else{
            temp.push(s[i]);
        }
    }
    while(temp.size()>0){
            p.push_back(temp.top());
            temp.pop();
        }
        reverse(p.begin(),p.end());
        cout<<p;
}
int main(){
    string s;
    cout<<"enter a string : ";
    cin>>s;
    remove(s);

}
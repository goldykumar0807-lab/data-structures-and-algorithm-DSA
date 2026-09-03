#include<iostream>
#include<string>
using namespace std;
void path(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) cout<<s<<endl;
    path(sr+1,sc,er,ec,s+'D');
    path(sr,sc+1,er,ec,s+'R');
}

int main(){
    int sr,sc;
    cout<<"enter starting row and column : ";
    cin>>sr>>sc;
    int er,ec;
    cout<<"enter ending row and column : ";
    cin>>er>>ec;
    string s;
    path(sr,sc,er,ec,s);
}

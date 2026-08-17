#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a word : ";
    cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        int x=(int)(s[i]-48);
        sum*=10;
        sum+=x;
    }
    cout<<sum;
    
}

//given n strings vector consisting of digits from 0 to 9.return the maximum number.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<string> v;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    int max=0;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        int x=stoll(v[i]);
        if(x>max) {
            max=x;
            idx=i;
        }
    }
    cout<<"maximum number is : "<<v[idx];
    
}

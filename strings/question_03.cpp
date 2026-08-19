//giving a sentence str and return the word that is occuring most no of times in sentence.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a sentence : ";
    getline(cin,s);
    vector<string> v;
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        v.push_back(temp); 
    }
    sort(v.begin(),v.end());
    int max=0;
    int count=1;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        count=1;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j] && i!=j) count++;
        }
         if(max<count) {
            max=count;
            idx=i;
         }
    }
    cout<<"word with max time occurence is : "<<v[idx]<<" "<<max;
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(vector<int> &v, int idx,vector<int> v1){
    if(idx==v.size()){
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(v,idx+1,v1);
    v1.push_back(v[idx]);
    subset(v,idx+1,v1);
}

int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> v1;
    subset(v,0,v1);
}

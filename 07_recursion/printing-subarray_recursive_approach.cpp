#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int> &v,int idx,vector<int> v1){
    if(idx==v.size()){
        for(int i=0;i<v1.size();i++){
            cout<<v1[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,idx+1,v1);
    if(v1.size()==0 || v1[v1.size()-1]==v[idx-1]){
        v1.push_back(v[idx]);
        subarray(v,idx+1,v1);
    }
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
    subarray(v,0,v1);
}

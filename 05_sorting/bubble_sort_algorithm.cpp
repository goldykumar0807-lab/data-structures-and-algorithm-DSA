#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
            }
            if(flag) break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

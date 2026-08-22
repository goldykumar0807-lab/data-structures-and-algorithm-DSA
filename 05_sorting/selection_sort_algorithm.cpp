#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(min>v[j]) {
                min=v[j];
                idx=j;
            }
        }
        swap(v[i],v[idx]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

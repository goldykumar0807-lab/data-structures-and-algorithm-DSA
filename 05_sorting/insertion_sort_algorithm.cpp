#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(v[j]>=v[j-1]) break;
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

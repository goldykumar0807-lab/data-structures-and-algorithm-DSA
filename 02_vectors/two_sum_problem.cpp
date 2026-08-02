#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector <int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum;
    cout<<"enter you target sum : ";
    cin>>sum;
    cout<<"index of elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==sum) cout<<"( "<<i<<" , "<<j<<" )"<<endl;
        }
    }
    return 0;
}

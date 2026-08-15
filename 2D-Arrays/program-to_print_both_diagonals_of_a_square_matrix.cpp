#include<iostream>
#include<vector>
using namespace std;
int main(){
    //taking matrix as an input.
    int n;
    cout<<"enter no of rows  : ";
    cin>>n;
    vector<vector<int>> v1(n,vector<int>(n));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<v1[i][j];
            else if (i+j==n-1) cout<<v1[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
}

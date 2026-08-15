#include<iostream>
#include<vector>
using namespace std;
int main(){
    //taking matrix as an input.
    int n;
    cout<<"enter no of rows  : ";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    //printing matrix in wave pattern.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0) cout<<v[n-j-1][i]<<" ";
            else cout<<v[j][i]<<" ";
        }
    }

}

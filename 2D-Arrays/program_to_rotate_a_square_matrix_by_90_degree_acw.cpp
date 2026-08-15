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
     vector<vector<int>> v2(n,vector<int>(n));
    //transpose of matrix.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v2[i][j]=v[j][i];
        }
    }
    //reversing columns.
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=v2[j][i];
            v2[j][i]=v2[n-j-1][i];
            v2[n-j-1][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }

}

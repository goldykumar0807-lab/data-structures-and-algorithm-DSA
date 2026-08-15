#include<iostream>
#include<vector>
using namespace std;
int main(){
    //taking matrix as an input.
    int m1,n1;
    cout<<"enter no of rows and columns : ";
    cin>>m1>>n1;
    vector<vector<int>> v1(m1,vector<int>(n1));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>v1[i][j];
        }
    }
    for(int i=0;i<m1;i++){
        if(i%2==0){
        for(int j=0;j<n1;j++){
            cout<<v1[i][j]<<" ";
            }
        }
        else {
            for(int j=n1-1;j>=0;j--){
                cout<<v1[i][j]<<" ";
            }
        }
    }
}

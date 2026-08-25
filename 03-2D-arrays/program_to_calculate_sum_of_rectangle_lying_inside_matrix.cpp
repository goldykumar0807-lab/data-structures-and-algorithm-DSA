#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no of rows and columns : ";
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>v[i][j];
        }
    }
    int i1,r1;
    cout<<"enter coordinates of upper left corner of rectnagle : ";
    cin>>i1>>r1;
    int i2,r2;
    cout<<"enter coordinates of bottom right corner of rectnagle : ";
    cin>>i2>>r2;
    cout<<"sum of elements lying in rectangle : ";
    int sum=0;
    for(int i=i1;i<=i2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=v[i][j];
        }
    }
    cout<<"sum of elements : "<<sum;

}

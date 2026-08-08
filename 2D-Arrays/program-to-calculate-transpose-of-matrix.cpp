#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter no of columns of 1st matrix: ";
    cin>>n;
    int arr1[m][n];
    cout<<"enter elements of  1st matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[n][m];
    cout<<"transpose of  matrix : \n";
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=arr1[j][i];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

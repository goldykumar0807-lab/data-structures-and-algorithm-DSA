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
    int arr2[m][n];
    cout<<"enter elements of 2nd matrix  : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"sum of two matrices is : \n";
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}

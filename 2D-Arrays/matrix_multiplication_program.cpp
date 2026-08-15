#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>> v){
    int m=v.size();
    int n=v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //taking first matrix as an input.
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
    //taking second matrix as an input.
    int m2,n2;
    cout<<"enter no of rows and columns : ";
    cin>>m2>>n2;
    vector<vector<int>> v2(m2,vector<int>(n2));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>v2[i][j];
        }
    }
     vector<vector<int>> v3(m1,vector<int>(n2));
    if(n1==m2){
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                int sum=0;
                for(int k=0;k<n1;k++){
                sum+=v1[i][k]*v2[k][j];
                }
                v3[i][j]=sum;
            }
        }
        cout<<"multiplied matrix is : "<<endl;
        display(v3);
    }
    else cout<<"matrix cannot be multiplied.";
    
}

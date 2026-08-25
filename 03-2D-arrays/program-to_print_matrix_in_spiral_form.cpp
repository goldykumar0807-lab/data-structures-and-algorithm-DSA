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
    int minr=0;
    int maxr=m1-1;
    int minc=0;
    int maxc=n1-1;
    while(minr<=maxr && minc<=maxc){
        //right.
        for(int i=minc;i<=maxc;i++){
            cout<<v1[minr][i]<<" ";  
        }
        minr++;
        //down.
        for(int i=minr;i<=maxr;i++){
            cout<<v1[i][maxc]<<" ";
        }
        maxc--;
        //left.
        for(int i=maxc;i>=minc;i--){
            cout<<v1[maxr][i]<<" ";
        }
        maxr--;
        //up.
        for(int i=maxr;i>=minr;i--){
            cout<<v1[i][minc]<<" ";
        }
        minc++;
    }
}

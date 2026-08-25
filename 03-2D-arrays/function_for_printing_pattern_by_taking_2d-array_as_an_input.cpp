#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<vector<int>> v){
    int m=v.size();
    int mid=(m-1)/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==mid) cout<<v[i][j];
            else if(j==mid) cout<<v[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int m;
    cout<<"enter no of rows : ";
    cin>>m;
    vector<vector<int>> v(m,vector<int>(m));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           cin>>v[i][j];
        }
    }
    display(v);
}

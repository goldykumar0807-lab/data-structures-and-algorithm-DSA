#include<iostream>
#include<vector>
#include<climits>
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
    int maxsum=INT_MIN;
    int row=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            sum+=v[i][j];
            if(sum>maxsum){
                maxsum=sum;
                row=i;
            }
        }
    }
    cout<<"row with maximum sum of element is : "<<row+1;
}

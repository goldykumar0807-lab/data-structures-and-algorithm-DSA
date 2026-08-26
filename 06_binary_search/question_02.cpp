/*Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
maximum number of 1’s.*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter rows of matrix : ";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    cout<<"enter elements of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int max=INT_MIN;
    int index=-1;
    for(int i=0;i<n;i++){
        int submax=INT_MIN;
        int low=0;
        int high=n-1;
        int idx=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(v[i][mid]==1){
                idx=mid;
                high=mid-1;
            }
            else low=mid+1;
            // by this technique we find first occurence of 1.
            if(idx!=-1) submax=n-idx;
            else submax=0;
            if(submax>max) {
                max=submax;
                index=i+1;
            }
        }
    }
    cout<<"row with maximum number of 1s is : "<<index;
}

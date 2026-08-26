#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int low=0;
    int high=n-1;
    int idx=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(v[mid]==1 ) {
            idx=mid;
            high=mid-1;
        }
        else if(v[mid]==0) low=mid+1;
    }
    //value of idx will give me first occurence of 1.
    int count=n-(idx);
    cout<<"no of 1's in array : "<<count;
}

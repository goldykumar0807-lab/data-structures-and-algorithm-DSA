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
    sort(v.begin(),v.end());
    int x;
    cout<<"enter target : ";
    cin>>x;
    int low=0;
    int high=n-1;
    int idx=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(v[mid]>x) {
            idx=mid;
            high=mid-1;
        }
        else if (v[mid]==x){
             idx=mid+1;
             break;
        }
        else if(v[mid]<x) low=mid+1; 
    }
    cout<<"upper bound of element is : "<<v[idx];
}

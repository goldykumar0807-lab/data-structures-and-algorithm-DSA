//given a sorted array of non negative distinct integers find the smallest missing non negative element in it.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
    bool flag=false;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(v[mid]!=mid) {
            idx=mid;
            high=mid-1;
            flag=true;
        }
        else if(v[mid]==mid){
            low=mid+1;
        }
       
    }
    if(flag) cout<<"smallest missing element is : "<<idx;
    else cout<<"there is no missing element : ";
}

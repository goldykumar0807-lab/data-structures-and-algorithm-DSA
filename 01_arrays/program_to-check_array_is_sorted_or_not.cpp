#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"array is sorted.";
    else cout<<"array is not sorted.";
  
} 

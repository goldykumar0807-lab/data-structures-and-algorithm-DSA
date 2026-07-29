#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array :  ";
    //taking input.
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"element with max value : "<<max;
    return 0;
}

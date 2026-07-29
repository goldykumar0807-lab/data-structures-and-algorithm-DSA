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
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)  max=arr[i];
        else if (smax<arr[i] && smax!=max) smax=arr[i];
    }
    cout<<"first largest element is  : "<<max<<endl;;
    cout<<"second largest element is : "<<smax;
    return 0;
}

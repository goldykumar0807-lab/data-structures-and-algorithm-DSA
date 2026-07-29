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
    int min=INT_MAX;
    int I;
    for(int i=0;i<n;i++){
        if(min>arr[i]) {
            min=arr[i];
            I=i;
        }
    }
    cout<<"element with minimum value is "<<min<<" present at index "<<I; 
}

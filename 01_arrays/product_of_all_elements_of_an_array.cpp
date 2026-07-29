#include<iostream>
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
    long long p=1;
    for(int i=0;i<n;i++){
        p*=arr[i];
    }
    cout<<"product of all elements of given array : "<<p;

}

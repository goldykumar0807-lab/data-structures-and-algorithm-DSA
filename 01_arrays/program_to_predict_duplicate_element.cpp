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
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            flag=true;
            cout<<arr[i]<<" is a duplicate element ";
            break;
        }
        }
    }
    if(flag==false) cout<<"no duplicate elements";
    return 0;
}

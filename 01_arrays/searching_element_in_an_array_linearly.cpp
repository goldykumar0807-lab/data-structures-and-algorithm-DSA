#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=false;
    cout<<"enter number of elements in array : ";
    cin>>n;
    cout<<"enter elements of array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter a number you want to search : ";
    cin>>x;
    int p;
    for(int i=0;i<n;i++){
        if(arr[i]==x) {
            flag=true;
            p=i;
            break;
        }
    }
    if(flag) cout<<"element found at index : "<<p;
    else cout<<"element didn't found.";

}

#include<iostream>
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
        if(arr[i]==arr[n-i-1]) continue;
        else flag=false;
    }
    if(flag) cout<<"yes array is palindrome.";
    else cout<<"no array is not palindrome.";
    return 0;
} 

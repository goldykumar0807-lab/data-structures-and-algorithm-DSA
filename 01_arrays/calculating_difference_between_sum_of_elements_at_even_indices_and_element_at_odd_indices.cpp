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
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sum1+=arr[i];
        else sum2+=arr[i];
    }
    if(sum1>sum2)   cout<<"difference is : "<<sum1-sum2;
    else cout<<"difference is : "<<sum2-sum1;
    return 0;

} 

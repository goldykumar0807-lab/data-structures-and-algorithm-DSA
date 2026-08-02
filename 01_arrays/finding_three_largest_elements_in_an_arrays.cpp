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
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            tmax=smax;
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && max!=arr[i]){
            tmax=smax;
             smax=arr[i];
        }
        else if(arr[i]>tmax && max!=arr[i] && smax!=arr[i]) {
            tmax=arr[i];
        }

    }
    cout<<"largest element is : "<<max<<endl;
    cout<<"second largest element is : "<<smax<<endl;
    cout<<"third largest element is : "<<tmax<<endl;
return 0;
} 

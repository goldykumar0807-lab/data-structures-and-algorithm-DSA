#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>v[i];
    int k;
    cout<<"enter size of subarray : ";
    cin>>k;
    int maxsum=INT_MIN;
    int prevsum=0;
    for(int i=0;i<k;i++) prevsum+=v[i];
    int i=1;
    int j=k;
    while(j<n){
        int currsum=prevsum+v[j]-v[i-1];
        if(currsum>maxsum){
            maxsum=currsum;
            prevsum=currsum;
        }
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<"maximum sum : "<<maxsum;
} 

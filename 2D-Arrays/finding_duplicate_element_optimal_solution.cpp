#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    int sum1=(n*(n-1))/2;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<"duplicate element is : "<<sum-sum1;
}

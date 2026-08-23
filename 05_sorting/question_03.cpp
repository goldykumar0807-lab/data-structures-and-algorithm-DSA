/*given an array with n distinct elements convert the given array to a form where all elements are in the range of o to n-1. the order of 
elements is the same i.e. 0 is placed in the place of smallest element 1 is placed for the second smallest element n-1 is placed for
the largest element.*/
#include<iostream>
#include<vector>
#include<algorithm>
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
    vector<int> v1;
    v1=v;
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v1[i]==v[j]) {
                v[j]=i;
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

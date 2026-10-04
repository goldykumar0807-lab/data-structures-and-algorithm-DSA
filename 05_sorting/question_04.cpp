//Given an array where all its elements are sorted in increasing order except two swapped 
//elements, sort it in linear time. Assume there are no duplicates in the array.
//Input: A[] = [3, 8, 6, 7, 5, 9, 10]
//Output: A[] = [3, 5, 6, 7, 8, 9, 10]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of vector : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x=-1;
    int y=-1;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            if(x==-1) x=i;
            else y=i+1;
        }
    }
    swap(v[x],v[y]);
    cout<<"sorted array is : ";
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}
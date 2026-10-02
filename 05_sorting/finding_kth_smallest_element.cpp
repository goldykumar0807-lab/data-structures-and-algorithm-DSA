#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int si,int ei){
    int pivot=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pivot) count++;
    }
    int pivotidx=count+si;
    swap(v[pivotidx],v[si]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(v[i]<=v[pivotidx]) i++;
        else if(v[j]>v[pivotidx]) j--;
        else if(v[i]>v[pivotidx] && v[j]<v[pivotidx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int quicksort(vector<int> &v,int si,int ei,int k){
    int pivotidx=partition(v,si,ei);
    if(pivotidx+1>k) return quicksort(v,si,pivotidx-1,k);
    else if(pivotidx+1==k) return v[pivotidx];
    else  return quicksort(v,pivotidx+1,ei,k);
}
int main(){
    int n;
    cout<<"enter no of elements : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"enter value of k to find kth smallest element : ";
    cin>>k;
    cout<<quicksort(v,0,n-1,k);
}
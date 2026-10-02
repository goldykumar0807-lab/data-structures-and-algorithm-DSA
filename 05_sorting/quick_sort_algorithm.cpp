#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int si,int ei){
    int pivot=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pivot) count++;
    }
    int pivotidx=si;
    if (count!=0){
    pivotidx=count+si;
    swap(v[si],v[pivotidx]);
    }
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(v[i]<=v[pivotidx]) i++;
        if(v[j]>v[pivotidx]) j--;
        else if(v[i]>v[pivotidx] && v[j]<v[pivotidx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }  
    return pivotidx;
}
void quicksort(vector<int> &v,int si,int ei){
    if(si>=ei) return;
    int pivotidx=partition(v,si,ei);
    quicksort(v,si,pivotidx-1);
    quicksort(v,pivotidx+1,ei);
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
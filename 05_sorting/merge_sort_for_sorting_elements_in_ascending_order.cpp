#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &v){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            v[k]=b[j];
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            v[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]==b[j]){
            v[k]=a[i];
            i++;
            k++;
            v[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==n1){
        for(j;j<n2;j++){
            v[k]=b[j];
            k++;
        }
    }
    if(j==n2){
        for(i;i<n1;i++){
            v[k]=a[i];
            k++;
        }
    }
    return;
}
void mergesort(vector<int> &v){
    if(v.size()<=1) return;
    int n1=v.size()/2;
    int n2=v.size()-n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[n1+i];
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>v[i];
    mergesort(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";  
}
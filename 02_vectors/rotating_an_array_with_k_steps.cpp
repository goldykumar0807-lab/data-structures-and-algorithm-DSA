#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void reverse_part(int i,int j,vector<int> &v){
     while(j>i){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void reverse (int i,int j,vector<int> &v){
    while(j>i){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"how many steps you want to rotate array ? ";
    cin>>k;
    reverse_part(0,n-k-1,v);
    reverse_part(n-k,n-k+1,v);
    reverse(0,n-1,v);
    display(v);
}

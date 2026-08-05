#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int x;
    cout<<"enter size of array : ";
    cin>>x;
    vector<int> v;
    cout<<"enter elements of array : ";
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n=v.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(v[mid]==0) {
            int temp=v[low];
            v[low]=v[mid];
            v[mid]=temp;
            low++;
            mid++;
        }
        else if(v[mid]==1) mid++;
        else if(v[mid]==2){
            int temp=v[high];
            v[high]=v[mid];
            v[mid]=temp;
            high--;
        }
    }
    display(v);
}

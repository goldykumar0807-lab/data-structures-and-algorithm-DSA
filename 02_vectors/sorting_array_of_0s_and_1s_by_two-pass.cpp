#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
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
    int n1=0; //count no of zeros.
    for(int i=0;i<n;i++){
        if(v[i]==0) n1++;
    }
    for(int i=0;i<n;i++){
        if(i<n1) v[i]=0;
        else v[i]=1;
    }
    cout<<"sorted array is : ";
    display(v);
}

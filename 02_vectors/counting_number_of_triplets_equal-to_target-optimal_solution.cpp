#include<iostream>
#include<vector>
#include<algorithm>
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
    cout<<"enter elements of array  : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cout<<"enter target : ";
    cin>>x;
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=v[i]+v[left]+v[right];
            if(sum<x) left++;
            if(sum==x){
                count++;
                left++;
                right--;
            }
            if(sum>x) right--;
            }
        }
    }
    

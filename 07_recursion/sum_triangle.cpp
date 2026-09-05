/*Given an array of integers, print a sum triangle using recursion from it such that the first level has 
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48] */
#include<iostream>
#include<vector>
using namespace std;
void sum_triangle(vector<int> &v, int idx, vector<int> &v1){
    if(idx==v.size()){
        v1=v;
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        return;
    }
    sum_triangle(v,idx+1,v1);
    vector<int> newVec;
    for(int i=0;i<v1.size()-1;i++){
        int x=v1[i]+v1[i+1];
        newVec.push_back(x);  
    }
    v1=newVec;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
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
    vector<int> v1;
    sum_triangle(v,1,v1);
}

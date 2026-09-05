#include<iostream>
#include<vector>
using namespace std;
void generate(int idx, int k,vector<int> &current,vector<int> &v){
    if(current.size()==k){
        for(int i=0;i<k;i++){
            cout<<current[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(idx;idx<v.size();idx++){
        current.push_back(v[idx]);
        generate(idx+1,k,current,v);
        current.pop_back();
    }
}
int main(){
    int k;
    cout<<"enter length of subsequence : ";
    cin>>k;
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> current;
    generate(0,k,current,v);
}

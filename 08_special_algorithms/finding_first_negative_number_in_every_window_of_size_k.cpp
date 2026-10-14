#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>v[i];
    int k;
    cout<<"enter size of window : ";
    cin>>k;
    vector<int> ans;
    int p=-1;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            ans.push_back(v[i]);
            p=i;
            break;
        }
    }
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i) ans.push_back(v[p]);
        else{
            for(p=i;p<=j;p++){
                if(v[p]<0){
                    ans.push_back(v[p]);
                    break;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
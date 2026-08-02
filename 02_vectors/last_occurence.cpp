#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter element to find last occurence : ";
    cin>>x;
    for(int i=n-1;i>0;i--){
        if(v[i]==x){
            cout<<"last occurence of "<<x<<" is at index : "<<i<<endl;
            break;
        }
    }
}  

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector <int> v(n);
    cout<<"enter elements of vector : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector <int> v2(n);
    for(int i=0;i<n;i++){
        v2[i]=v[n-1-i];
    }
    cout<<"reversed array is : ";
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
    return 0;

}

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
    int x1;
    cout<<"enter size of first array : ";
    cin>>x1;
    vector<int> v1;
    cout<<"enter elements of array  : ";
    for(int i=0;i<x1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    int x2;
    cout<<"enter size of second array : ";
    cin>>x2;
    vector<int> v2;
    cout<<"enter elements of array : ";
    for(int i=0;i<x2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    int n1=v1.size();
    int n2=v2.size();
    vector<int> v3(n1+n2);
    int i=0;
    int j=0;
    int k=0;
    while (i<n1 && j<n2){
        if(v2[j]>v1[i]){
            v3[k]=v1[i];
            k++;
            i++;
        }
        else if(v1[i]>v2[j]){
            v3[k]=v2[j];
            k++;
            j++;
        }
        else {
            v3[k]=v1[i];
            k++;
            v3[k]=v2[j];
            k++;
            i++;
            j++;
        }
        // when one array is finished.
        if(i==n1){
            while(j<n2){
                v3[k]=v2[j];
                k++;
                j++;
            }
        }
        if(j==n2){
            while(i<n1){
                v3[k]=v1[i];
                k++;
                i++;
            }
        }
    }
     display(v1);
    cout<<endl;
    display(v2);
    cout<<endl;
    display(v3);
    cout<<endl;
    int x;
    cout<<"enter a value of k to find k th smallest element : ";
    cin>>x;
    int p=v3[x-1];
    cout<<p<<" is the kth smallest element.";
}

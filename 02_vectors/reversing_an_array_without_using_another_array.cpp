#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    int i=0;
    int j=n-1;
    while(j>i){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout<<"reversed array is : ";
    display(v);

}

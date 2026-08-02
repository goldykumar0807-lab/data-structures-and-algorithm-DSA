//while passing a vector inside a function always pass by value takes place.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void change(vector<int> v){
    v[0]=100; 
}

int main(){
    int n;
    cout<<"enter size of vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of vector : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    display(v);
    change(v);
    display(v);

}

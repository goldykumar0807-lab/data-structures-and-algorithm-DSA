#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //insertion of elements in vector.
    v.push_back(1);
    v.push_back(10);
    v.push_back(18);
    v.push_back(19);
    v.push_back(12);
    v.push_back(31);
    // size of vector.
    cout<<"size of vector is : "<<v.size()<<endl;
    //displaying vetor elements.
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // deleting element of vector.
    v.pop_back();
    cout<<endl;
    cout<<"size of vector is : "<<v.size()<<endl;
    //displaying vetor elements.
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
return 0;
}

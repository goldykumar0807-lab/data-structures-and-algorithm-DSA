#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of students : ";
    cin>>n;
    int marks[n];
    cout<<"enter mark of each student :  ";
    //taking input.
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    //displaying output.
    for(int i=0;i<n;i++){
        cout<<"mark of student "<<i+1<<"  : "<<marks[i]<<endl;
    }
    return 0;
}

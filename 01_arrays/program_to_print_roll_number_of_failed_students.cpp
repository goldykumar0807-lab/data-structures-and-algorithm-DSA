#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of students : ";
    cin>>n;
    int p;
    cout<<"enter passing marks : ";
    cin>>p;
    int marks[n];
    cout<<"enter mark of each student :  ";
    //taking input.
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(marks[i]<p){
             cout<<"student with roll no : "<<i+1<<" failed."<<endl;
             sum++;
    } else if(sum==0) {
        cout<<"no one failed."<<endl;
    }
    else if (sum==1) continue;
}
 return 0;
}

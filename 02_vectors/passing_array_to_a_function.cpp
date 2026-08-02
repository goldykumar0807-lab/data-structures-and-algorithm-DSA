#include<iostream>
using namespace std;
    void display(int *ptr){
        for(int i=0;i<5;i++){
            cout<<*ptr<<" ";
            ptr++;
        }
        cout<<endl;
    }
    void change(int *b){
        *b=100;
    }
    int main(){
    int arr[5]={2,4,5,1,9};
    display(arr);
    change(arr);
    display(arr);
    }

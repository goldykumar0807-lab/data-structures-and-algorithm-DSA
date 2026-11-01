#include<iostream>
#include<vector>
using namespace std;
class queue{
    public:
    vector<int> arr;
    int size;
    int f;
    int b;
    queue(){
        size=0;
        f=0;
        b=-1;
    }
    void push(int val){
        arr.push_back(val);
        b++;
        size++;  
    }
    void pop(){
        f++;
        size--;
    }
    int front(){
        return arr[f];
    }
    int back(){
        return arr[b];
    }
    void display(){
        for(int i=f;i<=b;i++) cout<<arr[i]<<" ";
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_front(0);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    int x=dq.size();
    for(int i=0;i<x;i++){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}
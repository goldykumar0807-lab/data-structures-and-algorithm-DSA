#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    vector<int> arr;
    int idx=-1;
    //function for displaying size of stack
    int size(){
        return arr.size();
    }
    //function for pushing element in stack
    void push(int val){
        arr.push_back(val);
        idx++;
    }
    //function for removing element from top
    void pop(){
        if(idx==-1) {
            cout<<"stack is empty ";
        }
        arr.pop_back();
        idx--;
    }
    //function for getting element presenmt at top
    int top(){
        if(idx==-1) {
            cout<<"stack is empty";
            return -1;

        }
        else return arr[idx];

    }
    void display(){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.display();
}
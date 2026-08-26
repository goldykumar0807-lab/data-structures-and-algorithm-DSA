#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter number : ";
    cin>>x;
    int low=0;
    int high=x;
    int idx=-1;
    bool flag=false;
    while(low<=high){
        int mid=low+((high-low)/2);
        if((mid*mid)==x){
            idx=mid;
            flag=true;
            break;
        }
        else if((mid*mid)>x) high=mid-1;
        else if((mid*mid)<x) low=mid+1;
    }
    if(flag) cout<<"yes, number is a perfect square its square root is : "<<idx;
    else cout<<"no, number is not a perfect square.";
   
}

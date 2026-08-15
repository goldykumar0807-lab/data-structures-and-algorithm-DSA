#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> arr){
    cout<<"factorial of number is : ";
        for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    vector<int> ans;
    //initially factorial 1.
    ans.push_back(1);
    for(int i=2;i<=n;i++){
        int carry=0;
        for(int j=0;j<ans.size();j++){
            int product=ans[j]*i+carry;
            ans[j]=product%10;
            carry=product/10;
        }
        //storing carry in the end.
        while(carry>0){
            ans.push_back(carry%10);
             carry/=10;
        }
    }
    display(ans);
    return 0;
}

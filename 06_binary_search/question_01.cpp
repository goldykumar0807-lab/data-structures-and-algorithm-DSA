/*You have n coins and you want to build a staircase with these coins. The staircase consists of k 
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of coins : ";
    cin>>n;
    int i=1;
    int count=0;
    while(n>=i){ 
        count++;
        n=n-i;
        i++;
         
    }
    cout<<"no of complete rows : "<<count;
}

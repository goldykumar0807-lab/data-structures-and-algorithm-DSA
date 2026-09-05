/*A function countAndSay is defined as:
countAndSay(1) = “1”
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then 
converted into a different digit string.
So, if sample input is n = 4,
countAndSay(1) = 1
countAndSay(2) = “one 1” => 11
countAndSay(3) = “two 1” => 21
countAndSay(4) = “one 2 one 1” => 1211*/
#include<iostream>
#include<string>
using namespace std;
string countandsay(int n){
    if(n==1) return "1";
    string previous=countandsay(n-1);
    string current="";
    int count=1;
    for (int i = 0; i < previous.length(); i++) {
        if (i + 1 < previous.length() && previous[i] == previous[i + 1]) count++;
        else {
            current += to_string(count);
            current += previous[i];
            count = 1;
        }
    }
    return current;
}
int main(){
    int n;
    cout<<"enter a value of n  for the function : ";
    cin>>n;
    cout<<countandsay(n);
}

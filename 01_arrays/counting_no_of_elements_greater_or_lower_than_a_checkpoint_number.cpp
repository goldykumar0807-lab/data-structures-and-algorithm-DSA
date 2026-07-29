#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array :  ";
    //taking input.
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter a number you want as checkpoint : ";
    cin>>x;
    int sum1=0,count1=0;
    int sum2=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) {
            sum1+=arr[i];
            count1++;
        }
        else {
            sum2+=arr[i];
            count2++;
        }
    }
    cout<<"no of elements greater than "<<x<<" is "<<count1<<endl;
    cout<<"sum of all elements greater than "<<x<<" is "<<sum1<<endl;
    cout<<"no of all elements lower than "<<x<<" is "<<count2<<endl;
    cout<<"sum of all elements lower than "<<x<<" is "<<sum2<<endl;
    return 0;
}

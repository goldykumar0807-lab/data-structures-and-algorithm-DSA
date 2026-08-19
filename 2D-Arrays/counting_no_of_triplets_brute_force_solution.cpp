#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v;
    cout<<"enter elements of array  : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cout<<"enter target : ";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"( "<<i<<","<<j<<","<<k<<" )"<<endl;
                }
            }
        }
    }
}

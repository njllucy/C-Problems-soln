#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of an Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum=INT_MIN,cs=0;
    for(int i=0;i<n;i++){
           cs+=a[i];
           maxsum=max(cs,maxsum);
           if(cs<0){
            cs=0;
           }
    }
    cout<<"maximum Subarray sum is : "<<maxsum;
}

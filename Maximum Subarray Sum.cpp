#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
            int cs=0;
        for(int end=st;end<n;end++){
                cs+=a[end];
                maxsum=max(cs,maxsum);
        }
    }
    cout<<"maximum Subarray sum is : "<<maxsum;
}

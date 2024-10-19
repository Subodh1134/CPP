#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0,n,ans=0;
    cin>>n;
    while(n!=0){
        // int bit=n&1;
        // ans=bit*pow(10,i)+ans;
        // n=n>>1;
        // i++;

        int rem=n%2;
        ans=rem*pow(10,i)+ans;
        n/=2;
        i++;
    }
    cout<<ans;
}
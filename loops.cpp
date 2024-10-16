#include<iostream>
using namespace std;
int main(){
    int i=0,sum=0;
    cout<<sum;
    while(i<=10){
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
    int n,j=1;
    cin>>n;
    while(j<=10){
        cout<<n<<"x"<<j<<"="<<n*j<<endl;
        j+=1;
    }
    return 0;
}
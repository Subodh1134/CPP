#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int ncr=fact(n)/(fact(r)*(fact(n-r)));
    return ncr;
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<nCr(n,r);
}
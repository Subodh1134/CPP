#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i=2,n;
    cin>>n;
    bool isPrime=1;
    while(i<n){
        if(n%i==0){
            cout<<"Not a Prime number";
            isPrime=0;
            break;
        }
        i++;
        
    }
    if(isPrime){
            cout<<"Prime Number";
        }
    return 0;
}
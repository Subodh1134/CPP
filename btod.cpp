#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0,n;
    int sum=0;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        sum+=digit*pow(2,i);
        n/=10;
        i++;
    }
    cout<<sum;
}
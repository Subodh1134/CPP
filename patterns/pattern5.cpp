/*
*
**
***
****
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}
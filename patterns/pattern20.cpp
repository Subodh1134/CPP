/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int space;
    while(i<=n){
        for(j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}
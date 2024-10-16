/*
a
bb
ccc
dddd
*/
#include<iostream>
using namespace std;
int main(){
    int i=0,j,n;
    cin>>n;
    char ch='A';
    while(i<=n){
        for(j=0;j<=i;j++){
            cout<<char(ch+i);
        }
        cout<<endl;
        i++;
    }
}
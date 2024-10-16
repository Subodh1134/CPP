/*
abc
bcd
cde
*/
#include<iostream>
using namespace std;
int main(){
    int i=0,j,n;
    cin>>n;
    char ch='a';
    while(i<n){
        for(j=0;j<n;j++){
            cout<<char(ch+i+j);

        }
        cout<<endl;
        i++;
    }
}
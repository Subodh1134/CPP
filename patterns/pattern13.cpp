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
            char cg=char(ch+i+j);
            cout<<cg;
        }
        cout<<endl;
        i++;
    }
}
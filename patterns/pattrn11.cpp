/*
abc
abc
abc
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        char ch='a';
        for(j=1;j<=n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
        i++;
    }
}
/*
a
bc
cde
defg
*/
#include<iostream>
using namespace std;
int main(){
    int i=0,j,n;
    cin>>n;
    char ch='a';
    while(i<n){
        for(j=0;j<=i;j++){
            cout<<char(ch+i+j);
        }
        cout<<endl;
        i++;
    }
}
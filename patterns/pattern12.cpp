/*
abc
def
ghi
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    char ch='a';
    while(i<=n){
        
        for(j=1;j<=n;j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;
        i++;
    }
}
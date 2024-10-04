/*
111
222
333
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
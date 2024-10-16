/*
1
21
321
4321
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        int count=i;
        for(j=1;j<=i;j++){
            cout<<count;
            count--;
        }
        cout<<endl;
        i++;
    }
}   
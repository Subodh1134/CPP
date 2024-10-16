/*
1
23
345
4567
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
            count++;
        }
        cout<<endl;
        i++;
    }
}
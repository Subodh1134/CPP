/*
1
23
456
*/

#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int count=1;
    while(i<=n){
        for(j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
        i++;
    }
}
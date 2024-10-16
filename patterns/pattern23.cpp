/*
   1
  22
 333
4444
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int space;
    int count=1;
    while(i<=n){
        for(space=0;space<n-i;space++){
            cout<<" ";
        }
        for(j=1;j<=n-space;j++){
            cout<<count;
        }
        cout<<endl;
        count++;
        i++;
    }
}
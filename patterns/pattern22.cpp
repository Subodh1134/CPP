/*
1111
 222
  33
   4
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int count=1;
    int space;
    while(i<=n){
        for(space=0;space<i-1;space++){
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++){
            cout<<count;

        }
        cout<<endl;
        count++;
        i++;
    }
}
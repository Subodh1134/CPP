/*
   *
  **
 ***
****
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    int space;
    cin>>n;
    while(i<=n){
        for(space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}
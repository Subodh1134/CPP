/*
1234
 234
  34
   4
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int space,count=0;
    while (i<=n){
        for(j=1;j<=n-i+1;j++){
            cout<<count+j+i-1;
            // count++;
        }
        cout<<endl;
        i++;
        for(space=1;space<i;space++){
            cout<<" ";
        }
    }
    
}
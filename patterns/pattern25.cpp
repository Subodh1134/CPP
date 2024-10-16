/*
   1
  23
 456
78910
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int count=1;
    int space;
    while(i<=n){
        for(space=0;space<n-i;space++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
        i++;

    }
}
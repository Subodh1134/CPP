/*
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    int space,start,count=1;
    while(i<=n){
        for(space=0;space<n-i;space++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
            
        }
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}
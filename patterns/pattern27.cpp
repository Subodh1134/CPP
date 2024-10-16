/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j,n=5;
    while(i<=n){
        int count=1;
        for(j=1;j<=n-i+1;j++){
            cout<<count;
            count++;
        }
        int star=i-1;
        while(star){
            cout<<"**";
            star--;
        }
        int c=5;
        for(j=1;j<=n-i+1;j++){
            cout<<c-i-j+2;
        }
        cout<<endl;
        i++;
    }
}
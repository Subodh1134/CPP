#include<iostream>
using namespace std;
int setBit(int a ,int b){
    int countA=0,countB=0;
    while(a>=0&&b>0){
        int bitA=a&1;
        int bitB=b&1;
        if(bitA==1){
            countA++;
        }
        if(bitB==1){
            countB++;
        }
        a=a>>1;
        b=b>>1;
    }
    return countA+countB;
}
int main(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"Number of setBits are: "<<setBit(a,b);
}
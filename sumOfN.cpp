#include<iostream>
using namespace std;

int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fun(n);
}

/*
void fun(int i, int sum){
    if(i<1){
        cout<<sum;
        return ;
    } 
    fun(i-1,sum+i);
}

int main(){
    int i;
    cin>>i;
    fun(i,0);
}
*/
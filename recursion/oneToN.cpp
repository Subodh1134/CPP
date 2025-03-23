#include<iostream>
using namespace std;
void fun(int i, int N){
    if(i>N){
        return ;
    }
    cout<<i<<endl;
    return fun(i+1,N);
}
int main(){
    int N;
    cin>>N;
    fun(1,N);
}
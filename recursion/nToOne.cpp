#include<iostream>
using namespace std;
void fun(int i, int N){
    if(i>N){
        return ;
    }
    cout<<N<<endl;
    return fun(i,N-1);
}
int main(){
    int N;
    cin>>N;
    fun(1,N);
}
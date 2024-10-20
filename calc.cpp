#include<iostream>
using namespace std;
int main(){
    int a,b,op;
    cin>>a;
    cin>>b;
    cout<<"1.Add"<<endl;
    cout<<"2.Sub"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cin>>op;
    switch(op){
        case 1:cout<<a+b;
        break;
        case 2:cout<<a-b;
        break;
        case 3:cout<<a*b;
        break;
        case 4:cout<<a/b;
        break;
        default:cout<<"Invalid case";
        exit(0);
    }
}
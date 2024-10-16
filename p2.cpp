//conditions
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    if (a+b>7){
        cout<<"Greater"<<endl;
    }else{
        cout<<"LESS"<<endl;
    }

    char ch;
    cin>>ch;
    if (ch>='a'&& ch<='z'){
        cout<<"Lower case";
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"Upper case";
    }else{
        cout<<"NUMBER";
    }
    return 0;
}
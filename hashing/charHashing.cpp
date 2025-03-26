#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int hash[256]={0};
    for(int i=0;i<n;i++){
        hash[str[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;

        cout<<ch<<" Appears "<<hash[ch]<<" times"<<endl;
    }
}

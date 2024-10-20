#include<iostream>
using namespace std;
int main(){
    int ans=0,x;
    cin>>x;
    int original=x;
        while(x>0){
            int digit=x%10;
            ans=ans*10+digit;
            x/=10;
        }
        cout<<ans;
        if(original==ans){
            cout<<"true";
        }else{
            cout<<"false";
        }
        return 0;
}
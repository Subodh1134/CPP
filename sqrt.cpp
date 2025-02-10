#include<iostream>
using namespace std;

long long int unitNum(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double decimalNum(int n, int precision, int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){

    int n,precision;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Num of decimals you want: ";
    cin>>precision;
    int tempSol=unitNum(n);
    cout<<"The square root of the number is: "<<decimalNum(n,precision,tempSol)<<endl;
}
#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sum of the elemnts of array is: "<<sumArray(arr,size);
}
#include<iostream>
using namespace std;
void arrReverse(int arr[],int size){
    int temp;
    int start=0,end=size-1;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed arrray is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    // return 0;
}

int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    arrReverse(arr,size);
}
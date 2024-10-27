#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    int temp;
    if(size%2==0){
        for(int i=0;i<size;i+=2){
            swap(arr[i],arr[i+1]);

        }
    }else{
        for(int i=0;i<size-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        // cout<<arr[size-1];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,size);
}
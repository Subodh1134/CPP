#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    bool found=0;
    int i=0;
    for(i;i<size;i++){
        if(arr[i]==key){
            found=1;
            cout<<"key is present at ";
            return i;
        }
    }
    return found;
    
}
int main(){
    int arr[10],size;
    cin>>size;
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<search(arr,size,key);
}
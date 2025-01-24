#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,1,0,1,0};
    int i=0,j=5;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}
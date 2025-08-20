#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,5,6,7,3,5,8};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,n);
    return 0;
}
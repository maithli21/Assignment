#include<iostream>
using namespace std;
void duplicate(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[i]==arr[j]){
                int ind=j;
        for(int i=ind;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;

        }
        }
    }

    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,5,6,7,3,5,8};
    int n=sizeof(arr)/sizeof(int);
    duplicate(arr,n);
    return 0;
}
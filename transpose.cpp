#include<iostream>
using namespace std;
void transpose(int arr[][4],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][4]={1,3,5,6,7,3,5,8};
    transpose(arr,2,4);
    return 0;
}
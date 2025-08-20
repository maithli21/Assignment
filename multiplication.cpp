#include<iostream>
using namespace std;
void multiply(int arr[][3],int brr[][1],int r1,int c1,int r2,int c2){
    if(c1!=r2){
        cout<<"matrix can't be multiplied";
    }
    

        int res[10][10]={0};
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<c1;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
    
    for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }



}
int main(){
    int arr[2][3]={1,3,5,6,7,3};
    int brr[3][1]={5,7,3};
    multiply(arr,brr,2,3,3,1);
    return 0;
}
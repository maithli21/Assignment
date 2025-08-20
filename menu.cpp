#include<iostream>
using namespace std;
int n;
int arr[100];
void create(){
    cout<<"enter size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1;
        cin>>arr[i];
    }  
}
void display(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
}
void insert(){
    int idx;
    int no;
    cout<<"enter index for insertion";
    cin>>idx;
    cout<<"enter number to be inserted";
    cin>>no;
    if(idx>n){
        cout<<"not a valid index";
    }
    else{
        for(int i=n;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=no;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
}
void deletion(){
    int idx;
    cout<<"enter index for deletion";
    cin>>idx;
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void linearsearch(){
    int find;
    cout<<"enter number to check";
    cin>>find;
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            cout<<"found at index"<<i<<endl;
            break;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
}
void menu(){
    int a;
    while(1){
    cout<<"options in menu are"<<endl;
    cout<<"press 1 to create"<<endl;
    cout<<"press 2 to display"<<endl;
    cout<<"press 3 to insert"<<endl;
    cout<<"press 4 to delete"<<endl;
    cout<<"press 5 for linear search"<<endl;
    cout<<"press 6 to exit"<<endl;
    cout<<"give number"<<endl;
    cin>>a;    
    switch(a){
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        deletion();
        break;
        case 5:
        linearsearch();
        break;
        case 6:
        cout<<"EXIT";
        return;
        default:
        cout<<"CHOOSE NUMBER FROM GIVEN MENU";
    }  
    }
}
int main(){
    menu();
    return 0;
}
#include<iostream>
using namespace std;
void show(int Arr[],int n){
    for(int i=0;i<n;i++){
        cout<<Arr[i];
    }
}
void deletearr(int arr[],int idx,int n){
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];  
    }
}
int main(){
    int A[100]={4,7,23,86,40,10,36,64,};
    show(A,9);
    deletearr(A,3,8);
    show(A,7);
}
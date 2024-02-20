#include<iostream>
using namespace std;
//traversal
void show(int arr[] ,int n){
    for(int i=0;i<n;i++){
    cout<<arr[i];
    }
}
void insert( int arr[],int m,int x,int c,int idx){
 if(m>c){
    cout<< -1;
 }for(int i =m-1;i>=idx;i--){
    arr[i+1]=arr[i];
 }arr[idx]=x;
}

int main(){
  int A[50]={15,3,27,24,50,9};
  show(A,5);
  insert( A,6,32,10, 4);
  show(A,7);
}
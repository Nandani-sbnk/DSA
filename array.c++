#include<iostream>
using namespace std;
int main(){
    //hhhkk
   // int A[]={1,3,2,4,5,13};
    int i;
   // cout<<"array[0]"<<A[0]<<endl;
    //cout<<"array[1]"<<A[1]<<endl;
    //cout<<"array[2]"<<A[2]<<endl;
    //cout<<"array[3]"<<A[3]<<endl;
   // cin>>i;cout<<i;
char v[5];
for(i=0;i<5;i++)
for(char &elem:v){
    cin>>elem;
    cout<<elem<<" ";
}cin>>i;
cout<<i;
}
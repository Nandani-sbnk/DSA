#include<iostream>
using namespace std;
//linear search
/*
int main(){
   int A[100]={4 ,8,9,0,5,43,7,12,};
   int x,i;
   cin>>x;
   for(int i=0;i<9;i++){
cout<<A[i];
   if(x==A[i]){
    cout<<i;
   }
   }
}*///binary search
int  binarysearch(int arr[],int n,int ele){
    int min=0;
    int max=n;
    int mid;
   while (min<=max){
        mid=(min+max)/2;
        if(arr[mid]==ele){
            return mid;
        }
    if(ele>arr[mid]){
        min=mid+1;
    }else{
       max=mid-1;
    }
   }
}
int sortarry(int Arr[],int n){
    int tem=-1;
  for(int i=0;i<n;i++){
  if(Arr[i]<tem){
    tem=Arr[i];
  }
  }
}
int main(){
    int A[25]={5,8,9,11,35,62,74,90};
     int ans =binarysearch(A,9,11);
      cout<<ans;
      int B[34]={7,9,5,3,6,2,1,78};
      int bns=sortarry(B,5);
      cout<<bns;
}


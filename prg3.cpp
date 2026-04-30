#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
if(arr[i]==key){
return i;
}
}
return -1;
}
int main(){
  int arr[]={2,3,5,8,9};
  int n=sizeof(int)/sizeof(arr);
  linearsearch(arr,n,5);
  return 0;
}

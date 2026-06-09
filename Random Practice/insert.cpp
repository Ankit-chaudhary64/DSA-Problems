#include <iostream>
using namespace std;
int insertion(int arr[],int num,int index,int size){
    for (int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];

    }arr[index]=num;

}
int deletion(int arr[],int idx,int size){
    for(int i =idx;i<size;i++){
        arr[i]=arr[i+1];
    }
    return size-1;
    
}
int main(){
    int arr[23]={3,6,7,9,7,8,9,35,82,56,90},num,idx,size;
    size=11;
    //cout<<"enter the element : ";
    //cin>>num;
    cout<<"enter the index you want enter "<<num<<" this element at the position :";
    cin>>idx;
 /*  insertion(arr,num,idx,size);
    size+=1;
    for(int m=1;m<size;m++){
        cout<<arr[m]<<endl;
    }
   */ 
  size=deletion(arr,idx,size);
    for(int m=0;m<size;m++){
        cout<<arr[m]<<endl;
    }
}
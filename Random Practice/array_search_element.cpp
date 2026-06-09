#include <iostream>
using namespace std;
//linear serarch for Array
int linearSearch(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        

        }
          
        
    }
 return -1;
}
//binary search for array
int BinarySearch(int arr[],int n, int ele){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==ele){
            return mid;
        }
        else if(ele>arr[mid]){
            low=mid+1;

        }else{
            high=mid-1;
        }
    }
    return-1;
}
int main(){
    int arr[19]={2,4,5,6,7,8,23,34,45,67,69,79};
    int n =sizeof(arr)/sizeof(int);
    int num;
    cout<<"enter the element ";
    cin>>num;
    int store;
   // store=linearSearch(arr,n,num);
    // if(store==-1){
      //   cout<<"element nlt exist ";
     //}else{
       // cout<<store;
     //}

     store=BinarySearch(arr,n,num);
     if(store==-1){
         cout<<"element nlt exist ";
     }else{
        cout<<store;
     }
   
    return 0; 

}
#include <iostream>
using namespace std;

int arrmax_min(int arr[],int n){
    int min=arr[0];
    int max=0;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];   
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
   cout<<max<<endl<<min;
return 0;
}
int main(){
    int n;
    cout<<"enter theelement";
    cin>>n;
    int array[n];
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    cout<<"array elements :"<<endl;
    for(int i =0;i<n;i++){
        cout<<array[i]<<endl;
    }
    arrmax_min(array,n);
    return 0;
    
}


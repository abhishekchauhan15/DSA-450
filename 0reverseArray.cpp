#include<iostream> 
using namespace std;
void reverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){                       // 9, 8 , 7, 6,43
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

}
}                                         // time complexicity is o (1) 

int main(){
int n;
cout<<"enter the size";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

reverse(arr, n);
for(int i=0; i<n; i++)
cout<<arr[i]<<" ";

return 0;
}


// #include<iostream> 
// #include<bits.h>

// using namespace std;
// void reverse(int arr[], int n){
//     for(int i=0; i=n/2; i++){
//         swap(arr[i], arr[n-1-i]);                        // time complexicity is o (N) 
//     }
    
// }
// int main(){

// int n;
// cout<<"enter the size";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++)
// cin>>arr[i];

// reverse(arr, n);
// for(int i=0; i<n; i++)
// cout<<arr[i]<<" ";

// return 0;
// }

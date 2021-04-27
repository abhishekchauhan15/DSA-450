#include<iostream> 
using namespace std;
void rearr(int arr[], int n){
    int low=0;
    int high =n-1;

    while(high>=low){                                              // o(1)
        if(arr[low]<0 && arr[high]<0){
                                                        //--
            low++;
        }
        else if(arr[low]>0 && arr[high]<0){             //+-
             swap(arr[low], arr[high]);
             low++;
             high--;

        }
        else if (arr[low]>0 && arr[high]>0){            //++
            high--;

        }else {                                         //-+
            low++;
            high--;
        }
    }
}
int main(){
int n;
cout<<"enter ";

    cin>>n;

    int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

rearr(arr, n);

for(int i=0; i<n; i++)
cout<<arr[i]<<" ";


    

return 0;
}
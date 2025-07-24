// sort 0 1
#include<iostream>
using namespace std;
void sortZeroOne(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left < right){

       while(arr[left]==0 && left<right){
        left++;
       }

       while(arr[right]==1 && left<right){
        right--;
       }

       if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// sort 0 1 2

void sortThreeNumber(int arr[], int n){
     int low = 0;
     int mid = 0;
     int high = n-1;
    
    while(mid<= high){
        switch(arr[mid]){
            case 0: swap(arr[low++], arr[mid++]);
            break;

            case 1 : 
            mid++;
            break;
            case 2: swap(arr[mid],arr[high--]);
            break;
        }
    }

    

}



int main(){

    int brr[8]={0,1,1,0,1,0,1,1};

    int arr[8]={1,2,0,1,0,1,2,0};

    sortZeroOne(brr,8);
    printArray(brr,8);

    sortThreeNumber(arr,8);
    printArray(arr,8);


    return 0;
}
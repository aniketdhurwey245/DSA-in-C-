#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        //go to left 
        else if(arr[mid]<key){
            start = mid +1;

        }
        else {
            end = mid-1;
        }

        mid = start + (end-start)/2;

    }
    return -1;
}


int main(){

    int key;
    cout<<"Enter the key value"<<endl;
    cin>>key;

    int even[10]={1,2,5,7,8,9,12,15,67,89};
    int odd[9]={3,5,6,14,17,87,90,106,120};

    cout<<"Index for key is "<<binarySearch(even,10,key)<<endl;
    cout<<"Index for key is "<<binarySearch(odd,9,key)<<endl;


    return 0;
}
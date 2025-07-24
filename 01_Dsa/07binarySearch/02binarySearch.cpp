// First and Last position of an Element In Sorted Array
#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key){

    int start = 0, end= n-1;
    int mid = start + (end-start)/2;
    int ans= -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;

        }
        else if(arr[mid]<key){//go to right
            start = mid+1;
        }
        else{//go to left
            end = mid-1;

        }

        mid = start + (end-start)/2;
    }

    return ans;
}

// Another function 
int lastOccurence(int arr[], int n, int key){

    int start = 0, end= n-1;
    int mid = start + (end-start)/2;
    int ans= -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;

        }
        else if(arr[mid]<key){//go to right
            start = mid+1;
        }
        else{//go to left
            end = mid-1;

        }

        mid = start + (end-start)/2;
    }

    return ans;
}


int main(){

    int key;
    cout<<"enter the key"<<endl;
    cin>>key;

    int even[12] = {0,2,3,4,4,4,4,5,7,8,9,98};
    int odd[11] = {1,2,3,5,5,5,5,56,67,89,190};

    int fistOccuIndex = firstOccurence(even,12,key);
    int lastOccuIndex = lastOccurence(even, 12, key);

    cout<<"Fist occurence of an Element in Index is :"<<" "<<fistOccuIndex<<endl;
    cout<<"last occurence of an Element in Index is :"<<" "<<lastOccuIndex<<endl;
    
    int totalOccurence = (lastOccuIndex -fistOccuIndex)+1;
    cout<<totalOccurence<<endl;
    

    return 0;
}
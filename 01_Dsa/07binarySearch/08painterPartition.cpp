#include<iostream>
using namespace std;
bool isPossible(int arr[],int size, int painter,int mid){
    int painterCount =1;
    int unitWorkSum = 0;
     
    for(int i=0; i<size; i++){
        if(unitWorkSum +arr[i]<= mid){
            unitWorkSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount>painter || arr[i]>mid){
                return false;
            }
             unitWorkSum =arr[i];
        }
       
    }

    return true;


}


int painterPartition(int arr[], int size, int painter){
    int s = 0;
    int sum = 0;
    int ans = -1;

    for(int i=0; i<size; i++){
        sum +=arr[i];
    }

    int e = sum;
    int mid = s+(e-s)/2;

    while(s<=e){

        if(isPossible(arr,size,painter, mid)){
            ans = mid;
            e= mid-1;
        }
        else{
            s = mid+1;
        }
         mid = s+(e-s)/2;


    }

    return ans;
    
}

int main(){

    int brr[4]={5,5,5,5};
    int painter;
    cout<<"Enter the number of Painter"<<endl;
    cin>>painter;

    cout<<painterPartition(brr,4,painter);

    return 0;
}
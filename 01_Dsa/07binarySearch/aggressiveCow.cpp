#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[], int size, int cowNumber, int mid){
    int cowPossition = arr[0];
    int cowCount = 1;

    for(int i=0; i<size; i++){

    if(arr[i]-cowPossition>=mid){
        cowCount++;
        if(cowCount==cowNumber){
            return true;
        }
        cowPossition = arr[i];
    }

    }
    return false;

}


int cowPlace(int arr[],int n,int cowNumber){
    sort(arr, arr+n);
    int s=0;
    int maxi = -1;
    for(int i =0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;

    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(isPossible(arr,n,cowNumber,mid)){
            ans = mid;
            s = mid+1;

        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;

    }

    return ans;

}
int main(){

    int arr[5] = {4,2,1,3,6};

    int cowNumber;
    cout<<"Enter the number of cow"<<endl;
    cin>>cowNumber;

    cout<<cowPlace(arr,5,cowNumber)<<endl;


    return 0;
}
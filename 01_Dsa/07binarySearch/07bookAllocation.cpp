// length of array is equal to number of book
// each index having no page in book
/*******************Constraints***********************/
/*Each student atleast one book 
Each book should be allotted to student
book allocation should be in continous manner
*/

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum +arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}


int bookAllocation(int arr[],int n,int m){
// binary search logic
    int s= 0;
    int sum = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
   int e = sum;

    int mid = s+(e-s)/2;

    while(s<=e){

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s+(e-s)/2;

    }

    return ans;


}


int main(){

    int book[4]= {10,30,20,40};
    int m;
    cout<<"Give the Number Student :"<<" "<<endl;
    cin>>m;
    
   int allocated =bookAllocation(book,4,m);
   cout<<"Pages allocated :"<<allocated<<endl;


    return 0;
    
}
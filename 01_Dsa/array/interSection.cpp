 #include<iostream>
 #include<math.h>
 #include<limits>
 using namespace std;

findIntersection(int arr[], int brr[], int x, int y){


    int ans = 0;

    for(int i = 0; i<x; i++){
        int element = arr[i];

        for(int j = 0; j<y; j++){
        if(element == brr[j]){
            ans = element ;

        brr[j] = -1;

        break;


        }

       

    }

   
    }

    

    return ans;

}

int main(){

    int even[8] = {5,2,9,4,8,6,1,0};
    int odd[5] = {11, 33, 9, 76, 43};


    cout<<findIntersection(even, odd, 8,5);

    return 0;
}
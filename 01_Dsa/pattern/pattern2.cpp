#include<iostream>
using namespace std;
int main(){

    int n;
    int i=1;
    cin>>n;
    while(i<=n){

         int j=1;

         while(j<=n){
            cout<<i;
            j=j+1;

         }
     cout<<endl;
     i = i+1;

    }



    /*triangle printing*/
    cout<<"print triangle"<<endl;

    int k=1;
    int m;
    cin>>m;
     while(k<=m){

        int l = 1;
        while(l<=k){
            cout<<"*";
            l = l + 1;

        }
        cout<<endl;
        k = k + 1;
     }



     /*print pattern like
     
     1
     23
     345
     4567*/

     cout<<"taking input for pattern printing"<<"\n";

     int row=1;
     int q;
     cin>>q;
     while(row<=q){
        int col = 1;
        while(col<=row){

            /*we can also print that pattern by taking variable value = row and print value by increase value by 1*/
            cout<<row+col-1;
            col = col + 1;
        }
        cout<<"\n";
        row = row + 1;
     }

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    char start = 'A';

    cin>>n;

    while(i<=n){
        
        int j=1;
        while(j<=3){
            cout<<start;
            start++;
            j++;
        }
       cout<<endl;
       i++; 
    }

/*another pattern character printing*/

    return 0;
}
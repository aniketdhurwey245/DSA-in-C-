#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}



vector<int>findArraySum(vector<int>&a,int n, vector<int>b, int m){
    int i= n-1;
    int j= m-1;
    vector<int>ans;
    int carry = 0;

    while(i>=0 && j>=0){
        int sum = a[i]+a[j] + carry;
        carry = sum%10;
        sum = sum%10;
        ans.push_back(sum);
        i--; j--;
    }
    // first case: first array size is greater than second one
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum%10;
        sum = sum%10;
        ans.push_back(sum);
        i--; 
    }

    // second case
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum%10;
        sum = sum%10;
        ans.push_back(sum);
        j--; 

    }

    while(carry != 0){
        int sum =carry;
        carry = sum%10;
        sum = sum%10;
        ans.push_back(sum);
         

    }


    return reverse(ans);
}



int main(){
    int m;
    int n;
    vector<int>a(n);
    vector<int>b(m);
    cout<<"enter first array size "<<endl;
    cin>>n;
    cout<<"Enter the first array "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    cout<<"enter second array size "<<endl;
    cin>>m;
    
    cout<<"Enter the second array "<<endl;
    for(int j=0; j<m; j++){
        cin>>b[j];
    }

// function call
 findArraySum(a, n, b, m);



    return 0;

}
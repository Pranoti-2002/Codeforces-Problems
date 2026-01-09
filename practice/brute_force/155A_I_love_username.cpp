#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int cnt=0;
    int best=arr[0], wrost=arr[0];

    for(int i=1; i<n; i++){
        if(wrost > arr[i]){
            cnt++;
            wrost=arr[i];
        }else if(arr[i]> best){
            cnt++;
            best=arr[i];
        }
    }
    cout<<cnt;
    return 0; 
} 
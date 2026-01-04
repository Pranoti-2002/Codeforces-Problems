#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n; 
    
    vector<int>v;
    int x;
    
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    
    vector<int>res(n,0);
    
    for(int i=0; i<n; i++){
        res[v[i]-1]=i+1;
    }
    
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
} 

#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

bool isEqual(string s1 , string s2){
    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2,s3; 

    cin>>s1>>s2>>s3; 

    string res = s1+s2; 

    sort(res.begin() , res.end());
    sort(s3.begin() , s3.end()); 
    
    if(isEqual(res , s3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0; 
}
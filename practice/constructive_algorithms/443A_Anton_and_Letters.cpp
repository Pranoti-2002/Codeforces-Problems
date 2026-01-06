#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin, str); 

    vector<bool> v(26,false); 
    int count=0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            v[str[i]-'a']=true;
        }
    }
    
    for(int i=0; i<26; i++){
        if(v[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
} 
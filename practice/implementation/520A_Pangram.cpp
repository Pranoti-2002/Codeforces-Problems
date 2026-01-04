#include<iostream>
#include<vector>
using namespace std; 
bool isPangram(string s){
    vector<bool>res(26,false);
    for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0; i<s.length(); i++){
        res[s[i]-'a']=true;
    }

    for(int i=0; i<26; i++){
        if(!res[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n; // number of characters 
    cin>>n;

    string s;
    cin>>s;

    if(isPangram(s)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
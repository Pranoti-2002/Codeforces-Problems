#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string>polyhedrons;
    int faces=0;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        polyhedrons.push_back(s);
    }

    for(int i=0; i<polyhedrons.size(); i++){
        if(polyhedrons[i]=="Tetrahedron"){
            faces+=4;
        }
        else if(polyhedrons[i]=="Cube"){
            faces+=6;
        }
        else if(polyhedrons[i]=="Octahedron"){
            faces+=8;
        }else if(polyhedrons[i]=="Dodecahedron"){
            faces+=12;
        }else{
            faces+=20;
        }
    }
    cout<<faces;
    return 0; 
}
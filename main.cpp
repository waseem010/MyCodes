#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string name1;
    string name2;
    getline(cin,name1);
    getline(cin,name2);
    
    int count=0;
    
    
    for(int i=0;i<name1.length();i++)
    {
        for(int j=0;j<name2.length();j++){
            if(name1[i]==name2[j] && name2[i]!='0'){
                if(i==j){
                    count= count+2;
                }
                else{
                    count=count+1;
                    
                }
                
                name2[j]='0';
            }
        }
    }
return 0;
    
}
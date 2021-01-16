#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count(char *str,string word){
    char *ptr;
    vector<string>v;
    ptr=strtok(str," ");
    while(ptr!=NULL){
        v.push_back(ptr);
        ptr=strtok(NULL," ");
    }
    sort(v.begin(),v.end());
    
    string lastduplicates=v[0];
    
    for(int i=1;i<v.size();i++){
     if(lastduplicates==v[i]){
         continue;
     } else{
     cout<<lastduplicates;
     lastduplicates=v[i];
     }
        
    }
     cout<<" "<<lastduplicates;
    
    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
}


int main()
{
    char str[]="geeks for geeks geeks for geeks";
    string word="geeks";
    count(str,word);
}

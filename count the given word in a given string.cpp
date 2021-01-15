#include <bits/stdc++.h> 
using namespace std;

int count (char* str,string word)
{
    char *ptr; int result=0;
    vector<string>v;
    ptr=strtok(str," ");       // split the stirng into their words
    while(ptr!=NULL){
        v.push_back(ptr);
        ptr=strtok(NULL," ");
    }
    for(int i=0;i<v.size();i++)
        if(word==v[i])
          result++;
    return result; 
}



int main()
{
    char str[]="geeks for geeks geeks for geeks";
    string word ="geeks";
    // getline(cin,str);
    // cin>>word;
    cout<<"entered word :"<<word<<endl;
  cout<< count(str ,word);
     
}

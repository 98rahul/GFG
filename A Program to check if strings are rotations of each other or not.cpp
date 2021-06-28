#include<bits/stdc++.h>
using namespace std;
void rotateByOne(string &str)
{
    
    int n= str.size();  char temp=str[0];int i=0;
    for(;i<n-1;i++)
    {
       str[i]=str[i+1];
    }
    str[i]=temp;
    
}

bool rotational(string str1, string str2)
{
    
    int n1= str1.size(),n2= str2.size();
    if(n1!=n2)
    return 0;
    
    for(int i=0;i<n1;i++)
    {
        if(str1==str2)
        return 1;
        else
        rotateByOne(str1);
    }
    return 0;
}
/* 
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;
  
   string temp = str1 + str1; 
  return (temp.find(str2) != string::npos);
}
//(O(n1+n2)
*/

int main()
{
    string str1="abcd";
    string str2="cdab";
    
   cout<< rotational(str1,str2);
}
// O(N^2)

#include<bits/stdc++.h>
using namespace std;
/* iterative solution
void output(char str[])
{
    int n =strlen(str);
    int prev=0;
    for(int curr=1;curr<n;curr++)
    {
        if(str[prev]!=str[curr])
        {
            prev++;
            str[prev]=str[curr];
        }
    }
    prev++;
    str[prev]='\0';
}
*/
// recursive solution )(N^2)
void Rfun(char str[])
{
    int n=strlen(str);
   // base case code termiantion step 
    if(n<2) 
    return;
   // small calculation
   
   if(str[0]==str[1]){
       // left shift by cons
       
       int i=0;
       while(str[i]!='\0')
       {
           str[i]=str[i+1];
           i++;
       }
       Rfun(str);
       
   }
   else
   Rfun(str+1);
    
}


int main()
{
    char input[]="gggfffdsss";
    output(input);
  // Rfun(input);
    int n=strlen(input);
    for(int i=0;i<n;i++)
    cout<<input[i];
}

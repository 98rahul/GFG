#include<bits/stdc++.h>
using namespace std;
int main()
{
   int rows;
   cin>>rows;
    /*  
   for(int i=0;i<rows;i++)
   { 
       {
           int j=0;
        for( ;j<rows-i-1;j++)
        cout<<"  ";
       
        while(j<rows)
       
       {
           cout<<"* "; j++;
       }
       cout<<"\n";
   }
    
}
  output
      * 
    * * 
  * * * 
* * * * 
    */
    // ------------------------------------------//
/*
for(int i=0;i<rows;i++)
{ 
   { int j=0;
    for(; j<i;j++)
    {
        cout<<" ";
    }
    while(j<rows)
    {
        cout<<"*";
        j++;
    }
   
    cout<<"\n";
   }
}

output
****
 ***
  **
   *
   
*/ 
//--------------------------------------------//
/*
for(int i=0;i<rows;i++)
{
    for(int j=0;j<rows-i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
output
****
***
**
*

*/
//----------------------------------------------------//
/*
for(int i=0;i<rows;i++)
{
    for(int j=0;j<2*rows-1;j++)
    {
        if(j>=rows-i-1 && j<= rows+i-1)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<"\n";
}
output
   *   
  ***  
 ***** 
*******

*/
//--------------------------------------//

/*
for(int i=0;i<rows;i++)
{
    int k=1;
    for(int j=0;j<2*rows-1;j++)
    {
        if(j>=rows-i-1 && j<= rows+i-1 && k)
        {
            cout<<"*";
            k=0;
        }
        else
        {
            cout<<" ";
            k=1;
        }
        
        
        
    }
    cout<<endl;
}
 output
   *   
  * *  
 * * * 
* * * *
*/
//-----------------------------------------//

}




























}
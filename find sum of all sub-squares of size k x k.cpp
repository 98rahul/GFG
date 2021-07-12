//  find sum of all sub-squares of size k x k

#include<bits/stdc++.h>
using namespace std;
#define n 3

void print(int mat[][n], int k)
{  
/*  first k*k matrix ka sum nikal paa rahe 
    int sum=0;
    for(int i=0;i<=n-k;i++)
    {
        for(int j=0;j<=n-k;j++)
        {
            sum+= mat[i][j];
        }
    }
    cout<<sum;
*/
    /* O(N^2 * k^2)
    for(int i=0;i<=n-k;i++)  // i se vertical ke along
    {
        for(int j=0;j<=n-k;j++)     // j se horizontal ke along jaa rahe 
        {
            int sum=0; 
            for(int p=i;p<i+k;p++)            // window selection kr rahe and sub elements ko select kr rahe
            {
                for(int q=j;q<j+k;p++)
                {
                    sum+= mat[p][q];
                    
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    */
    
}


int main()
{
    int mat[n][n]={{1,2,3},{4,5,6},{7,8,9}}; int k=2;
    print(mat,k);
    
}

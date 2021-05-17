// Change in the given string itself. So no need to return or print the changed string.

int length(char arr[])
{
    int n=0;
    for(int i=0;arr[i]!='\0';i++)
        n++;
    return n;
}

void starIn(char input[], int start)
{
   if(input[start]=='\0')  
       return;
    
    
    starIn(input,start+1);
    
    if(input[start]==input[start+1])
    {
        int len=length(input);
        
        input[len+1]='\0';
        int i;
        //shifting
        for( i=len-1; i>=start+1;i--)
        {
            
               input[i+1]=input[i];
        }
        input[i+1]='*';
        
    }

}

void pairStar(char input[]) {
    // Write your code here
   starIn(input,0); 
    

}

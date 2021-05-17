int length(char input[])
{
    int n=0;
    for(int i=0; input[i]!='\0';i++)
        n++;
    return n;
}


void RemoveX(char input[], int start)
{
     if(input[start]=='\0')
         return;
    
    RemoveX(input, start+1);
    
    if(input[start]=='x')
    {
        int len=length(input);int i;
        for(i=start+1;i<len;i++)
            input[i-1]=input[i];
        
        input[i-1]='\0';
    }



}


void removeX(char input[]) {
    // Write your code here
    
    RemoveX(input,0);
    
    

}

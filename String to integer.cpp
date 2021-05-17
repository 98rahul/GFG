
int length(char arr[])
{
    int n=0; 
    for(int i=0; arr[i]!='\0'; i++)
        n++;
    return n;
}

 int convert(char input[], int end)

{
    if(end==1)
    {
       int b=input[end-1];
        b-=48;
        return b;
    
    }
    
    // int len=length(input);
    int a=input[end-1];
    a-=48;
    
   return  convert(input,end-1)*10+a;
    

}




int stringToNumber(char input[]) {
    // Write your code here
    
    
    int n= length(input);
    return convert(input, n);

}



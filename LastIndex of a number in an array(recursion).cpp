int lastIndex(int input[] , int size ,int x)
{

// base case
if(size==0)
return -1;
// recusive call
int ans=lastindex(input+1 , size-1 ,x);
{
// check condition

if(ans==-1)
{
// check the first index elemet
if(input[0]==x)
return 0;
else
return -1;
}
else
return ++ans;

}

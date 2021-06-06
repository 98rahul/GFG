// O(n) solution

int digSum(int n)
{
    int sum = 0;
    
    while(n > 0 || sum/10)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
// O(1) solution 
// very imp*** if we divide a number by 9 then remainder is sum of digits until it becomes unit digit else gives 9.
int digSum(int n)
{
    if (n == 0)
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}

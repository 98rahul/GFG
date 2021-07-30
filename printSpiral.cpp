// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration



void spiralPrint(int **input, int nRows, int nCols)
{     
    int rowStart=0, rowEnd= nRows-1, colStart=0,  colEnd= nCols-1;
    
    while(rowEnd >= rowStart && colEnd >= colStart)
    {
       for(int i=colStart; i<=colEnd;i++)
       {
           cout<<input[rowStart][i]<<" ";
       }
        rowStart+=1;
        for(int i=rowStart;i<=rowEnd;i++)
        {
            cout<< input[i][colEnd]<<" ";
        }
      colEnd-=1;
        for(int i= colEnd;i>=colStart;i--)
        {
            cout<< input[rowEnd][i]<<" ";
        }
        rowEnd-=1;
        
        for(int i=rowEnd; i>= rowStart;i--)
        {
            cout<<input[i][colStart]<<" ";
        }
      colStart+=1;
    
    
    }
       //Write your code here
}

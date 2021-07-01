// greedy is that we are taking value/weight(maximum) basis   

double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n, comp);  int curWeight=0; double fValue=0;
        
        for(int i=0;i<n;i++)
        {
            
            if(curWeight+arr[i].weight<=W)
            {
                curWeight+=arr[i].weight; // kanpsack weight raise ho rha
                fValue+= arr[i].value;
            }
            else
            {
                int fractionWeight= W- curWeight;
                fValue+= arr[i].value*((double)fractionWeight)/(arr[i].weight);
                break;
            }
        }
        return fValue;
  
    }
        
};

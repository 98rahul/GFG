#include <iostream>
using namespace std;

void count(string str1, string str, int N1)
{
    int count1=0;
    for(int i=0;i<N1;i++)
    {  int j=0;
        for(;j<3;j++)
        {
            if(str1[i+j]!=str[j])
            break;
            
        }
        if(j==3)
        count1++;
    }
    
    if(count1==0)
    cout<<"-1"<<endl;
    else
    cout<<count1<<endl;
  
}


int main() {
    int T;
    cin>>T;  string str1,str="gfg";
    while(T!=0)
    {
        // getline(cin,str1);
        cin>>str1;
        int N1=str1.size();
        count(str1,str,N1);
        
        T--;
    }
    
	//code
	return 0;
}

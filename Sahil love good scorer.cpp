#include <iostream>
using namespace std;

void max(int C1[],int C2[], int N1,int N2)
{
    int sum1 =0,sum2=0;
    for(int i=0;i<N1;i++)
     sum1 +=C1[i];
     
     for(int i=0;i<N2;i++)
     sum2 +=C2[i];
     
     if(sum1>sum2)
     cout<<"C1";
     else
     cout<<"C2";
     
     cout<<endl;
}
int main() {
    int T,N1,N2;
    cin>>T;
    while(T!=0)
    {
    cin>>N1>>N2;
    int C1[N1];int C2[N2];
    
    for(int i=0;i<N1;i++)
    cin>>C1[i];
    
    for(int i=0;i<N2;i++)
    cin>>C2[i];
    max(C1,C2,N1,N2);
        T--;
    }
    
	//code
	return 0;
}

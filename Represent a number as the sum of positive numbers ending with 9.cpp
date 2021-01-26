#include<bits/stdc++.h>
using namespace std;

void print(int num)
{
    int k;
    k=num%10;
    int NIne_threp=9-k;
    int rem=num-(9*NIne_threp);
    if(rem>=9 && rem%10==9){
    cout<<"numbers are:";
    while(NIne_threp>0)
   { cout<<"9"<<" ";
    NIne_threp--;}
    cout<<" "<<rem<<endl;
    cout<<"count the possible numbers :"<<10-k;
        
    }
}



int main()
{
    int num;
    cin>>num;
    print(num);
}

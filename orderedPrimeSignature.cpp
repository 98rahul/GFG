// CPP to find total number of divisors of a
// number, using ordered prime signature
#include <bits/stdc++.h>
using namespace std;

// Finding primes upto entered number
bool checkprime(int n)
{
  int count =0;
for(int i=2;i<=sqrt(n);i++)
{
  if(n%i==0)
    count++;
}
if(count>0)
  return false;
  else
    return true;}

vector<int> primes(int n)
{
	bool prime[n + 1];

	memset(prime, -1, sizeof(prime));
	
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if(prime[i]==-1)
        {
          if(!checkprime(i))
        { prime[i]=0;}
        }	
	}	
	vector<int> arr;

	for (int i = 2; i <= n; i++) 
	{
		if (prime[i])
			arr.push_back(i);
	}
	return arr;
}
vector<int> signature( int n)
{
	vector<int> r = primes(n);

	map<int, int> factor;
	

	map<int, int>::iterator it;
	vector<int> sort_exp;
	int k, t = n;
	it = factor.begin();
	
	for (int i = 0; i < r.size(); i++) 
	{
		if (n % r[i] == 0) {
			k = 0;
			while (n % r[i] == 0) {
				n = n / r[i];
				k++;
			}
			
			
			factor.insert(it, pair<int, int>(r[i], k));
			sort_exp.push_back(k);
		}
	}
	
	// Sorting the stored exponents
	sort(sort_exp.begin(), sort_exp.end());
	
	// Printing the prime signature
	cout << " The Ordered Prime Signature of " << 
		t << " is : \n{ ";
		
	for (int i = 0; i < sort_exp.size(); i++)
	{
		if (i != sort_exp.size() - 1)
			cout << sort_exp[i] << ", ";
		else
			cout << sort_exp[i] << " }\n";
	}
	return sort_exp;
}
void divisors(int n)
{
	int f = 1, l;
	vector<int> div = signature(n);
	l = div.size();
	

	for (int i = 0; i < l; i++) 
	{
		
		div[i] += 1;
	
		f *= div[i];
	}
	cout << "The total number of divisors of " << 
		n << " is " << f << "\n";
}


int main()
{
	int n = 13;
	divisors(n);
	return 0;
}
// https://ide.geeksforgeeks.org/ygJ2xXjWvt

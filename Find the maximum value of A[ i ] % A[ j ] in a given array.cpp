#include <bits/stdc++.h>
using namespace std;


// solution in O(N^2)

int solution(int A[], int N)
{   int maxValue= INT_MIN; int curr;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            curr=A[i]%A[j];
            maxValue =max(maxValue, curr);
        }
    }
    return maxValue;
    
    //write your code here    
}

// try to find 2nd largest element in an array... using dynamic array and sort them and return the 2nd last element
// C++ implementation of the above approach


// Function to return maximum value of
// arr[i] % arr[j]
int computeMaxValue(int[] arr, int n)
{
	bool check= true;
	int i = 1;
	while (i < n) {

		// If current element is different
		// from the previous element
		if (arr[i] != arr[i - 1]) {
			check = false;
			break;
		}
		i++;
	}

	// If all the elements of the array are equal
	if (check)
		return 0;

	// Maximum element from the array
	int max = *max_element(arr, arr + n);  // way to find max_element from a define range of array
	int secondMax = INT_MIN;
	for (i = 0; i < n; i++) {
		if (arr[i] < max && arr[i] > secondMax)
			secondMax = arr[i];
	}
	return secondMax;
}

int main()
{
	int arr[] = { 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << computeMaxValue(arr, n);
	return 0;
}

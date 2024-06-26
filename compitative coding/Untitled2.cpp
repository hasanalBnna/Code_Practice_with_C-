// C++ program to find the sum of the first half
// elements and second half elements of an array
#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of the first half
// elements and second half elements of an array
void sum_of_elements(int arr[], int n)
{
	int sumfirst = 0, sumsecond = 0;

	for (int i = 0; i < n; i++) {
		// Add elements in first half sum
		if (i < n / 2)
			sumfirst += arr[i];

		// Add elements in the second half sum
		else
			sumsecond += arr[i];
	}

	cout << "Sum of first half elements is " <<
								sumfirst << endl;

	cout << "Sum of second half elements is " <<
								sumsecond << endl;
}

// Driver Code
int main()
{
	int arr[] = { 20, 30, 60, 10, 25, 15, 40 };

	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	sum_of_elements(arr, n);

	return 0;
}

/*
Given two arrays count all pairs whose sum is an odd number
Given two arrays of N and M integers. The task is to find the number of unordered pairs formed of elements from both 
arrays in such a way that their sum is an odd number.

Note: An element can only be one pair.

*/


// C++ program to implement 
// the above approach 


#include <bits/stdc++.h> 
using namespace std; 

// Function that returns the number of pairs 
int count_pairs(int a[], int b[], int n, int m) 
{ 

	// Count of odd and even numbers 
	int odd1 = 0, even1 = 0; 
	int odd2 = 0, even2 = 0; 

	// Traverse in the first array 
	// and count the number of odd 
	// and evene numbers in them 
	for (int i = 0; i < n; i++) { 
		if (a[i] % 2) 
			odd1++; 
		else
			even1++; 
	} 

	// Traverse in the second array 
	// and count the number of odd 
	// and evene numbers in them 
	for (int i = 0; i < m; i++) { 
		if (b[i] % 2) 
			odd2++; 
		else
			even2++; 
	} 

	// Count the number of pairs 
	int pairs = min(odd1, even2) + min(odd2, even1); 

	// Return the number of pairs 
	return pairs; 
} 

// Driver code 
int main() 
{ 
	int a[] = { 9, 14, 6, 2, 11 }; 
	int b[] = { 8, 4, 7, 20 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	int m = sizeof(b) / sizeof(b[0]); 
	cout << count_pairs(a, b, n, m); 

	return 0; 
} 

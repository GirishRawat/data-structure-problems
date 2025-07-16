/*

Subarray Sums I

Given an array of n positive integers, your task is to count the number of subarrays having sum x.
Input
The first input line has two integers n and x: the size of the array and the target sum x.
The next line has n integers a_1,a_2,\dots,a_n: the contents of the array.
Output
Print one integer: the required number of subarrays.
Constraints

1 \le n \le 2 \cdot 10^5
1 \le x,a_i \le 10^9

Example
Input:
5 7
2 4 1 2 7

Output:
3

*/

#include <iostream>
using namespace std;

int main() {

	int n, x;
	cin >> n >> x;;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int s = 0, e = 0, count = 0, sum = 0;

	while (e < n) {
		sum += a[e];

		while (sum > x && s <= e) {

			sum -= a[s];
			s++;
		}


		if (sum == x) {
			count++;
		}
		e++;

	}

	cout << count;

}
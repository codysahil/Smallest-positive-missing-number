#include<iostream>
#include<algorithm>
using namespace std;

int posMissing(int arr[], int n) {
	int k = 1;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			k++;
		}
	}
	return k;
}
int main() {
	int arr[] = { -10,5,3,1,-2,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Smallest Positive integer is : "<< posMissing(arr, n);
}


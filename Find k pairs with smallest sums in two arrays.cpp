#include<bits/stdc++.h>
using namespace std;

void kSmallestPair(int arr1[], int n1, int arr2[], int n2, int k)
{
	if (k > n1*n2)
	{
		cout << "k pairs don't exist";
		return ;
	}
	int index2[n1];
	memset(index2, 0, sizeof(index2));

	while (k > 0)
	{
		int min_sum = INT_MAX;
		int min_index = 0;
		for (int i1 = 0; i1 < n1; i1++)
		{
			if (index2[i1] < n2 &&
				arr1[i1] + arr2[index2[i1]] < min_sum)
			{
				min_index = i1;
				min_sum = arr1[i1] + arr2[index2[i1]];
			}
		}
		cout << "(" << arr1[min_index] << ", "
			<< arr2[index2[min_index]] << ") ";
		index2[min_index]++;
		k--;
	}
}
int main()
{
	int arr1[] = {1, 3, 11};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2, 4, 8};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int k = 4;
}

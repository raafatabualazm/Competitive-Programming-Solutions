#include <iostream>
#include <vector>

using namespace std;
void findCombinationsUtil(int arr[], int index, int num, int reducedNum)
{
	// Base condition 
	if (reducedNum < 0)
		return;

	// If combination is found, print it 
	if (reducedNum == 0)
	{
		for (int i = 0; i < index; i++)
			cout << arr[i] << " ";
		cout << endl;
		return;
	}

	// Find the previous number stored in arr[] 
	// It helps in maintaining increasing order 
	int prev = (index == 0) ? 1 : arr[index - 1];

	// note loop starts from previous number 
	// i.e. at array location index - 1 
	for (int k = prev; k <= num; k++)
	{
		// next element of array is k 
		arr[index] = k;

		// call recursively with reduced number 
		findCombinationsUtil(arr, index + 1, num,
			reducedNum - k);
	}
}

void findCombinations(int n)
{
	// array to store the combinations 
	// It can contain max n elements 
	int arr[n];

	//find all combinations 
	findCombinationsUtil(arr, 0, n, n);
}

int main()
{
	int t, x, k, m, a, b, tempNum;
	cin >> t;
	vector<vector<int>> c;
	while (t--)
	{
		cin >> x, k, m, a, b;


		findCombinations(a);
	}

}
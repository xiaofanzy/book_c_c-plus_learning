#include <iostream>
#include <vector>
#include <cstring>

int main(void)
{
	using namespace std;

	int size;

	cout << "Enter the size of vector:"<< endl;
	cin >> size;

	int *arr1 = new int[size];
	arr1[0] = 1;
	cout << "arr[0] = " << arr1[0] << endl;
	delete [] arr1;

	vector<int> arr2(size);
	arr2[0] = 2;
	cout << "arr2[0] = " << arr2[0] << endl;

	return 0;
}
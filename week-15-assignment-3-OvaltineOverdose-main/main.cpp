#include "main.hpp"

int main()
{
	const int N = 10;
	int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
	// const int N = 5;
	// int array[N] = {4, 2, 5, 6, 3};

	quickSort(array, N);
	for (int v : array)
		cout << v << "\t";
	cout << endl;
}
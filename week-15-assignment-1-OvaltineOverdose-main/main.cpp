#include "main.hpp"
using namespace std;

int main()
{
	const int N = 10;
	int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};

	bubbleSort(array, N);
	for (int v : array)
		cout << v << "\t";
	cout << endl;
	// Sorted List :10      15      20      25      30      35      40      45      50      55
}

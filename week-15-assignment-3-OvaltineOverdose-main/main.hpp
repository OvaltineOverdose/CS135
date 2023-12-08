#include "main.hpp"

int main()
{
    const int N = 6;
    int numbers[N] = { 5, 2, 9, 1, 5, 6 };

    cout << "Original Array: ";
    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    quickSort(numbers, N);

    cout << "Sorted Array: ";
    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

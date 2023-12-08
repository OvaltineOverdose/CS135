#include <iostream>
#include <fstream>
using namespace std;

void quickSort(int numbers[], int);
int split(int numbers[], int, int);

int split(int numbers[], int first, int last)
{
    int pivot = numbers[first];
    int left = first + 1;
    int right = last;

    while (true)
    {
        while (left <= right && numbers[left] <= pivot)
        {
            left++;
        }

        while (right >= left && numbers[right] >= pivot)
        {
            right--;
        }

        if (left > right)
        {
            break;
        }

        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
    }

    int temp = numbers[first];
    numbers[first] = numbers[right];
    numbers[right] = temp;

    return right;
}

void quickSort(int numbers[], int first, int last)
{
    if (first < last)
    {
        int stack[last - first + 1];
        int top = -1;

        stack[++top] = first;
        stack[++top] = last;

        while (top >= 0)
        {
            last = stack[top--];
            first = stack[top--];

            int pivot = split(numbers, first, last);

            if (pivot - 1 > first)
            {
                stack[++top] = first;
                stack[++top] = pivot - 1;
            }
            if (pivot + 1 < last)
            {
                stack[++top] = pivot + 1;
                stack[++top] = last;
            }
        }
    }
}

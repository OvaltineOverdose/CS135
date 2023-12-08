// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1", "[example]")
{
	const int N = 10;
	int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
	// const int N = 5;
	// int array[N] = {4, 2, 5, 6, 3};

	quickSort(array, 0, N - 1);
	cout << "After Sorting \n";
	for (int v : array)
		cout << v << "\t";
	cout << endl;

	REQUIRE(array[0] == 10);
	REQUIRE(array[1] == 15);
	REQUIRE(array[2] == 20);
	REQUIRE(array[3] == 25);
	REQUIRE(array[4] == 30);
	REQUIRE(array[5] == 35);
	REQUIRE(array[6] == 40);
	REQUIRE(array[7] == 45);
	REQUIRE(array[8] == 50);
	REQUIRE(array[9] == 55);
}

TEST_CASE("Ex2", "[example]")
{
	const int N = 5;
	int array[N] = {4, 2, 5, 6, 3};

	quickSort(array, 0, N - 1);
	cout << "After Sorting \n";
	for (int v : array)
		cout << v << "\t";
	cout << endl;

	REQUIRE(array[0] == 2);
	REQUIRE(array[1] == 3);
	REQUIRE(array[2] == 4);
	REQUIRE(array[3] == 5);
	REQUIRE(array[4] == 6);
}
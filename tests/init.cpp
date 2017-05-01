#include <quicksort.hpp>
#include <catch.hpp>

SCENARIO("test")
{
  	int a[6] = { 2, 4, 1, 3, 7, 5 };
	int b[6] = { 1, 2, 3, 4, 5, 7 };
	int* i1 = &a[0];
	int* i2 = &a[6];
	quicksort(i1, i2);
	bool check = true;
	for (int i = 0; i < 6; ++i)
	{
		if (a[i] != b[i])
			check = false;
	}
	REQUIRE(check == true);
}

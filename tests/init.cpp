#include <quicksort.hpp>
#include <catch.hpp>

SCENARIO("matrix sorting")
{
  	int matrix[3][3] = { { 8, 2, 5 },
			 { 10, 4, 11 },
			 { 1, 12, 9 } };
	int sorted_matrix[3][3] = { { 1, 2, 4 }, 
				{ 5, 8, 9 }, 
				{ 10, 11, 12 } };
	int* first_ = &matrix[0][0];
	int* second = &matrix[2][2];
	insertion_sort(first_, second);
	bool check = true;
	for (int i = 0; i < 3; i++)
    	for(int j = 0; j < 3; j++)
			if (matrix[i][j] != sorted_matrix[i][j])
				check = false;
	REQUIRE(check == true);
}

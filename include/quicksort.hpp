#include <iostream>
#include <iterator>
using namespace std;
template <typename Iterator>
void quicksort(Iterator start, Iterator end)
{
	Iterator pivot = end - 1;
	Iterator j = end - 1;
	Iterator i = start;
	while (i <= j)
	{
		
		while (*i < *pivot)
		{
			++i;
		}
		while (*j > *pivot)
		{
			--j;
		}
		if (i <= j)
		{
			iter_swap(j, i);
			++i;
			--j;
		}
	}
		if (i < end)
			quicksort(i, end);
		if ( start < j)
			quicksort(start, j+1);
}

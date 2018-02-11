// Source : https://leetcode.com/problems/hamming-distance/description/
// Arthor : YX
// Date   : 2018-02-10

/*******************************************************************************
* The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
* 
* Given two integers x and y, calculate the Hamming distance.
* 
* Note:
* 	0 ≤ x, y < 231.
* 
* Example:
* 	Input: x = 1, y = 4
* 	Output: 2
* 
* Explanation:
* 	1   (0 0 0 1)
* 	4   (0 1 0 0)
* 	       ↑   ↑
* The above arrows point to positions where the corresponding bits are different.
*
*******************************************************************************/

#include <stdio.h>

int hammingDistance(int x, int y)
{
	int dist = 0, xor = x ^ y;

	while (xor)
	{
		dist++;
		xor &= xor - 1;
	}

	return dist;
}

int main()
{
	printf("hammingDistance(1, 4) = %d\n", hammingDistance(1, 4));
	printf("hammingDistance(3, 1) = %d\n", hammingDistance(3, 1));

	return 0;
}

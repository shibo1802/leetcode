// Source : https://leetcode.com/problems/jewels-and-stones/description/
// Arthor : YX
// Date   : 2018-02-10

/*******************************************************************************
* You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
* Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
* 
* The letters in J are guaranteed distinct, and all characters in J and S are letters.
* Letters are case sensitive, so "a" is considered a different type of stone from "A".
* 
* Example 1:
* 	Input: J = "aA", S = "aAAbbbb"
* 	Output: 3
* 
* Example 2:
* 	Input: J = "z", S = "ZZ"
* 	Output: 0
* 
* Note:
* 	S and J will consist of letters and have length at most 50.
* 	The characters in J are distinct.
* 
*******************************************************************************/

#include <stdio.h>

int numJewelsInStones(char* J, char* S)
{
	int i = 0, j = 0, cnt = 0;

	for (i = 0; J[i] != '\0'; i++)
	{
		for (j = 0; S[j] != '\0'; j++)
		{
			if (J[i] == S[j])
			{
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	char J1[] = "aA", S1[] = "aAAbbbb";
	char J2[] = "z", S2[] = "ZZ";

	printf("J1 = %s, S1 = %s, numJewelsInStones = %d\n", J1, S1, numJewelsInStones(J1, S1));
	printf("J2 = %s, S2 = %s, numJewelsInStones = %d\n", J2, S2, numJewelsInStones(J2, S2));

	return 0;
}

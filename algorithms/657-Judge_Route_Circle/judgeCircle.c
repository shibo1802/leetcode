// Source : https://leetcode.com/problems/judge-route-circle/description/
// Arthor : YX
// Date   : 2018-02-11

/*******************************************************************************
* Initially, there is a Robot at position (0, 0). Given a sequence of its moves,
* judge if this robot makes a circle, which means it moves back to the original place.
* 
* The move sequence is represented by a string. And each move is represent by a character.
* The valid robot moves are R (Right), L (Left), U (Up) and D (down).
* The output should be true or false representing whether the robot makes a circle.
* 
* Example 1:
* 	Input: "UD"
* 	Output: true
* 
* Example 2:
* 	Input: "LL"
* 	Output: false
* 
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

bool judgeCircle(char* moves)
{
	int x = 0, y = 0;

	while (*moves)
	{
		switch (*moves)
		{
			case 'R':
				x++;
				break;

			case 'L':
				x--;
				break;

			case 'U':
				y++;
				break;

			case 'D':
				y--;
				break;
		}

		moves++;
	}

	if (x == 0 && y == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	printf("S: %s, isCircle: %s\n", "UD", judgeCircle("UD") ? "True" : "False");
	printf("S: %s, isCircle: %s\n", "LL", judgeCircle("LL") ? "True" : "False");

	return 0;
}

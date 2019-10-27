#include <stdio.h>
#include <limits.h>

/*
	This program represents the wrong way to
	test for integer overflow (wrap).
	The program is incorrectly checking if (sum + i)
 	is greater than UINT_MAX, because if sum equals
	UINT_MAX, sum + i will overflow.

	Assignment : Modify this program to correctly
	check and alert on an overflow condition.

*/

int main (int argc, char **argv)
{
	unsigned int i = 1;// unsigned 
	unsigned int sum = UINT_MAX;//UNIT_MAX: max value for an object of type unsigned
	
	printf ("sum     : %u\n", sum);//%u= unsigned int , but %d= signed int
	printf ("sum + 1 : %u\n", sum + 1);//sum = UNIT_MAX largest possible number in unsigned, Therefore incrementing an unsigned integer at its maxium value results in the minimum value for that type ! 

	if (UINT_MAX - i < sum)// instead of if (sum + i > UINT_MAX) //a precondition test of the addition's oprands to guarantee that there is no possiblity of wraparound! 
	{
		printf ("overflow\n");
	}
	else 
	{
		printf ("no overflow\n");
	}
}

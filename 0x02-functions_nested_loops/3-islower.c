#include "main.h"

/**
 *_islower - check if int c is lower
 *
 * Return: 1 if lower,0 if upper
 */

int _islower(int c)
{
	if (c  >= 97  &&  c  <=  122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

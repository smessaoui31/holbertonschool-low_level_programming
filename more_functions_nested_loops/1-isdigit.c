#include "main.h"
/**
  *_isdigit - Prints the digit of a number
  * @c : The number to be treated
  *
  * Return: Value of the last digit of number
  */


int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);

	}
	return (0);
}

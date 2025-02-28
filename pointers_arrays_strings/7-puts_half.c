#include "main.h"


void puts_half(char *str) {
	int l = 0;
	while (str[l] != '\0') {
		l++;
	}

	int x = (l + 1) / 2;

	for (int i = x; str[i] != '\0'; i++) {
		_putchar(str[i]);
	}

	_putchar('\n');
}

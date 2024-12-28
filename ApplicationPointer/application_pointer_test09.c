#include <stdio.h>
int main(void)
{
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;
	char* const q = s;

	//p[3] = 'a'; impossible

	p = t; //possibile

	q[3] = 'a'; //possible

	//q = t; impossible

	return 0;
}

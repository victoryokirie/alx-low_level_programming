#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0(Success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

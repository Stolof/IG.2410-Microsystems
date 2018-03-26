#include <stdio.h>

int CompareChaines(char ch1[], char ch2[])
{
	if ((ch1[0] == 0) && (ch2[0] == 0)) return 0;
	if (ch1[0] < ch2[0]) return -1;
	if (ch1[0] > ch2[0]) return 1;
	return (CompareChaines(&ch1[1], &ch2[1]));
}
int main()
{
	char c1[] = "bonjour";
	char c2[] = "bonjour";
	char c3[] = "au revoir";

	printf("%s // %s = %d\n", c1, c2, CompareChaines(c1, c2));
	printf("%s // %s = %d\n", c1, c3, CompareChaines(c1, c3));
	printf("%s // %s = %d\n", c3, c1, CompareChaines(c3, c1));

	return 0;
}

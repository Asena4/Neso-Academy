#include <stdio.h>

int main()
{
	char x = 1, y = 2;                       // 1 (0000 0001) and 2 (0000 0010)
	if(x&y)                                  //1&2 = 0 (0000 0000)
		printf("Result of x&y is 1");
	if(x&&y)                                 //1&&2 = TRUE && TRUE (because any other number beside 0 is treated as TRUE) = TRUE = 1
		printf("Result of x&&y is 1");
	return 0;
}

#include <stdio.h>
int main() {
	int i, n = 2;
	for(i = 0; i <= 20; i++)
	{
		if(i % 2 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
}

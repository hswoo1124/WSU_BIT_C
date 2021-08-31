#include <stdio.h>

void main()
{
	int count=0;
	char str[5];
	for (int i = 0; i < 10001; i++)
	{
		sprintf(str, "%d", i);
		/*for (int i2 = 0; i2 < sizeof(str); i2++)
		{
			if (str[i2] == 8)
			{
				count++;
			}
		}*/
	}
	printf("%d", str[1]);
}


#include <stdio.h>

char s[1024];

int main()
{
	int flag, res, pid;
	freopen("d:/hw.txt", "w", stdout);
	flag = 0;
	while (fgets(s, 1024, stdin))
	{
		res = sscanf(s, "- UVa %d", &pid);
		if (res != 1)
		{
			res = sscanf(s, "* UVa %d", &pid);
		}
		if (res != 1)
		{
			res = sscanf(s, "UVa %d", &pid);
		}
		if (res == 1)
		{
			if (flag)
			{
				putchar(',');
			}
			flag = 1;
			printf("UVa%d", pid);
		}
	}
	puts("");
	return 0;
}

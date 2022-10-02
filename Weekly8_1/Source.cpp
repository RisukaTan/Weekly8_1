#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp;//65010536
	char str[100];
	char* p;
	p = str;
		printf("Input String : \n");
		while (*p != '.') {
			scanf("%s", str);
			fp = fopen("mytestfile.txt", "a");
			fprintf(fp, "%s\n", str);
			fclose(fp);
		}
	return 0;
}
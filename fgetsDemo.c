#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
	char buf[100];
	FILE *stdin;
	stdin=fopen("file.txt","r");
	FILE *stdout;
	stdout=fopen("filecopy.txt","w");
	while (fgets(buf,100, stdin) != NULL)
		if (fputs(buf, stdout) == EOF)
			printf("output error");
	if (ferror(stdin))
		printf("input error");
return 0;
}

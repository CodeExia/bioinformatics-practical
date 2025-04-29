#include <stdio.h>
#include <string.h>

int patternBio(char string[], char pattern[]);

int main()
{
	char inputText[1000];
	char inputPattern[100];
	
	printf("Input the genome sequence:\n");
	scanf("%s", inputText);
	printf("Input the pattern you want to count:\n");
	scanf("%s", inputPattern);
	
	printf("%d", patternBio(inputText, inputPattern));
	
	return 0;
}

int patternBio(char string[], char pattern[])
{
	int counter = 0;
	int length = strlen(pattern);
	int i = 0;
	for (i = 0; i <= strlen(string) - length; i++)
	{
		char place[strlen(pattern)+1];
		strncpy(place, &string[i], length);
		place[length] = '\0';
		if ((0 == strcmp(place, pattern)))
			counter++;
	}
	return counter;
}


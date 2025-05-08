#include <stdio.h>
#include <string.h>

void patternBio(char string[], int kmer);

int main()
{
	char inputText[5000];
	int kmer;
	
	printf("Input the genome sequence:\n");
	scanf("%s", inputText);
	printf("k-mer?\n");
	scanf("%d", &kmer);
	
	patternBio(inputText, kmer);
	
	return 0;
}

void patternBio(char string[], int kmer)
{
	int counter = 0;
	int length = strlen(string);
	for (int i = 0; i <= length - kmer; i++)
	{
		char pattern[kmer+1];
		strncpy(pattern, &string[i], kmer);
		pattern[kmer] = '\0';

		for (int j = 0; j<= length - kmer; j++)
		{
			char place[kmer+1];
			strncpy(place, &string[j]
				, kmer);
			place[kmer] = '\0';
			if ((0 == strcmp(pattern, place)))
				counter++;
		}

		printf("%s appears %d times.\n", pattern, counter);
		counter = 0;
	}
	return;
}


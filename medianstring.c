#include <stdio.h>
#include <string.h>

int patternBio(char string[], char pattern[]);


int main()
{

    char input[5000];
    int kmer;

    printf("Enter the whole genome:\n");
    scanf("%s", input);

    printf("Enter the kmer of the pattern:\n");
    scanf("%d", &kmer);
    char pattern[kmer+1];

    for (int i = 0; i < kmer+1; i++)
    {
        pattern[i] = 
    }


    return 0;
}

int patternBio(char string[], char pattern[])
{
	int counter = 0;
	int length = strlen(pattern);
	for (int i = 0; i <= strlen(string) - length; i++)
	{
		char place[length+1];
		strncpy(place, &string[i], length);
		place[length] = '\0';
		if ((0 == strcmp(place, pattern)))
		{
			counter++;
			printf("Index %d\n", i);
		}
	}
	return counter;
}
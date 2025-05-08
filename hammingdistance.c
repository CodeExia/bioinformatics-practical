#include <stdio.h>
#include <string.h>

int main()
{
	char input[5000];
	char input2[5000];
	int counter = 0;
	
	printf("Input first string:\n");
	scanf("%s", input);
	printf("Input second string:\n");
	scanf("%s", input2);
	
	for (int i = 0; !(input[i] == '\0');i++)
	{
		if (input[i] == input2[i])
			continue;
		else 
			counter++;
	}
	
	printf("The Hamming distance is: %d\n", counter);
	return 0;
}
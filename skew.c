#include <stdio.h>
#include <string.h>

int main()
{
    char input[5000];

    printf("Please enter a genome:\n");
    scanf("%s", input);
    int size = strlen(input);

    for (int i = 0, counter = 0; i < size+1; i++)
    {
        if (input[i] == 'C')
            printf("Index: %d, counter = %d\n", i, counter--);
        else if (input[i] == 'G')
            printf("Index: %d, counter = %d\n", i, counter++);
        else 
        printf("Index: %d, counter = %d\n", i, counter);
    }

    return 0;
}
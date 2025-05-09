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
            printf("%d ", counter--);
        else if (input[i] == 'G')
            printf("%d ", counter++);
        else 
        printf("%d ", counter);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000];

    printf("Please enter a genome:\n");
    scanf("%s", input);
    int size = strlen(input);
    int minimum = 0;

    for (int i = 0, counter = 0; i < size+1; i++)
    {
        if (input[i] == 'C')
            counter--;
        else if (input[i] == 'G')
            counter++;
        if (counter < minimum)
            minimum = counter;
    }

    for (int i = 0, counter = 0; i < size+1; i++)
    {
        if (input[i] == 'C')
            counter--;
        else if (input[i] == 'G')
            counter++;
        if (counter == minimum)
            printf("%d ", i+1);
    }
    
    return 0;
}
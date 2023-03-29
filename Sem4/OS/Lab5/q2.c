#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    pid_t pid;

    if (argc < 2)
    {
        printf("Usage: %s string1 string2 ... stringN\n", argv[0]);
        return 1;
    }

    // create a child process
    pid = fork();

    if (pid < 0) // fork failed
    {
        fprintf(stderr, "Fork Failed");
        exit(1);
    }
    else if (pid == 0) // child process
    {
        // sort the strings
        int i, j;
        char temp[100];

        for (i = 1; i < argc; i++)
        {
            for (j = i+1; j < argc; j++)
            {
                if (strcmp(argv[i], argv[j]) > 0)
                {
                    strcpy(temp, argv[i]);
                    strcpy(argv[i], argv[j]);
                    strcpy(argv[j], temp);
                }
            }
        }

        // display the sorted strings
        printf("Sorted Strings:\n");
        for (i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    else // parent process
    {
        // display the unsorted strings
        printf("Unsorted Strings:\n");
        int i;
        for (i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}

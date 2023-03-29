#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void bubble_sort(char *strings[], int n)
{
    int i, j;
    char temp[100];

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (strcmp(strings[j], strings[j+1]) > 0)
            {
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], temp);
            }
        }
    }
}

void selection_sort(char *strings[], int n)
{
    int i, j, min;
    char temp[100];

    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (strcmp(strings[j], strings[min]) < 0)
            {
                min = j;
            }
        }
        if (min != i)
        {
            strcpy(temp, strings[i]);
            strcpy(strings[i], strings[min]);
            strcpy(strings[min], temp);
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char *strings[n];
    int i;
    for (i = 0; i < n; i++)
    {
        strings[i] = (char *) malloc(100 * sizeof(char));
        printf("Enter string %d: ", i+1);
        scanf("%s", strings[i]);
    }

    // create the first child process
    pid_t pid1 = fork();

    if (pid1 < 0) // fork failed
    {
        fprintf(stderr, "Fork Failed");
        exit(1);
    }
    else if (pid1 == 0) // first child process
    {
        bubble_sort(strings, n);
        printf("Bubble Sort:\n");
        for (i = 0; i < n; i++)
        {
            printf("%s\n", strings[i]);
        }
        exit(0);
    }
    else // parent process
    {
        // create the second child process
        pid_t pid2 = fork();

        if (pid2 < 0) // fork failed
        {
            fprintf(stderr, "Fork Failed");
            exit(1);
        }
        else if (pid2 == 0) // second child process
        {
            selection_sort(strings, n);
            printf("Selection Sort:\n");
            for (i = 0; i < n; i++)
            {
                printf("%s\n", strings[i]);
            }
            exit(0);
        }
        else // parent process
        {
            // wait for one of the child processes to finish
            int status;
            pid_t pid = wait(&status);

            // display the remaining strings
            printf("Remaining Strings:\n");
            for (i = 0; i < n; i++)
            {
                printf("%s\n", strings[i]);
            }
        }
    }

    return 0;
}


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    //char **argv = {"/usr/bin/ls", "-l", NULL};
    pid_t pid;
    printf("Before fork\n");

    pid = fork();
    if (pid == -1)
    {
        perror("Error Encountered");
    }
    printf("Hello\n");

    return (0);
}
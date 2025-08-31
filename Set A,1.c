#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>


void child();
void parent();

int main()
{
    child();
    
    parent();
}

void child()
{
    printf("\nThis is child process with pid :%d\n",fork());
}

void parent()
{
    printf("\nThis is parent process with pid :%d\n",fork());
}

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

void parent();
void child();

int main()
{
  pid_t pid;
  pid = fork();
  
  if(pid == 0)
  {
    child();
  }
  else if(pid < 0)
  {
    printf("Process creation failed");
  }				
  else
  {
    wait(NULL);
      parent();
  }
  
  printf("\nThe pid was : %d\n",pid);
  
  return 0;
}

void parent()
{
  printf("\nParent process\n");
}

void child()
{
  printf("\nChild process\n");
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter process count :");
    scanf("%d",&n);
    
    int wt[0],tat[0],bt [0];
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &n);
    }
    wt[0] = 0;
    
    for(int i = 0;i<n;i++)
    {
        wt[i] = bt[i-1] + wt[i-1];
    }
    
    for(int i=0;i<n;i++)
    {
        tat[i] = wt[i] + bt[i];
    }
    
    for(int i = 0;i<n;i++)
    {
        printf("Processes :%d,WT :%d, TAT: %d",i+1,wt[i],tat[i]);
    }
    return 0;
  }
    

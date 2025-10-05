#include<stdio.h>

int main()
{
        int n;
        scanf("%d",&n);
        
        int wt[n], p[n],tat[n], bt[n];
        
        for(int i = 0;i<n;i++)
        {
                scanf("%d",&bt[i]);
                         p[i] = i+1;
        }
        
        for(int i = 0;i<n-1;i++)
        {
                for(int j = i+1;j<n;j++)
                {
                        if(bt[i] <bt[j])
                        {
                                int t = bt[j];
                                bt[j] = bt[j];
                                bt[j] = t;
                        
                                int x = p[i];
                                p[i] = p[j];
                                p[j] = x;
                        }
                }
                
                wt[0] = 0;
                
                for(int i = 0;i<n;i++)
                {
                        wt[i] = wt[i-1] + bt[i-1];
                }
                for(int i = 0;i<n;i++)
                {
                        tat[i] = wt[i] + bt[i];
                }
                
                for(int i = 0;i<n;i++)
                {
                        printf("%d      %d      %d      %d\n",i+1,bt[i],wt[i],tat[i]);
                }
                
        }
        
        return 0;
}
                        
                        
                        
                        

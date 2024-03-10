#include <stdio.h>
#include <string.h>
 int n;
struct abc
{
    char a[10];
    int at,bt,tat,wt,rt;
}s[1000];
int main()
{
    //FCFS
    
    printf("enter no. of processes\n");
   
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         printf("enter process name AT and BT\n");
         scanf("%c %d %d",&s[i].a,&s[i].at,&s[i].bt);
    }
    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(s[j].at>s[j+1].at)
                {
                    int t=
}
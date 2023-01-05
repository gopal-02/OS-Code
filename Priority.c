// Non-preemptive priority scheduing program
#include <stdio.h>
int main()
{
    int i, j, n, pos, temp = 0, sum = 0, twt = 0, ttat = 0;
    int p[10]={1,2,3,4,5,6,7,8,9,10};
    int prt[10], bt[10], wt[10], ct[10], tat[10];
    float awt, atat;
    printf("Enter total no of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter burst time and priority of process %d :", i + 1);
        scanf("%d %d", &bt[i], &prt[i]);
    }
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i+1; j < n; j++)
        {
            if (prt[j] < prt[pos])
            {
                pos = j;
            }
        }
        temp = prt[pos];
        prt[pos] = prt[i];
        prt[i] = temp;

        temp = bt[pos];
        bt[pos] = bt[i];
        bt[i] = temp;

        temp = p[pos];
        p[pos] = p[i];
        p[i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        ct[i] = sum + bt[i];
        sum = ct[i];
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
        ttat = ttat + tat[i];
        twt = twt + wt[i];
    }
    awt = (float)twt / n;
    atat = (float)ttat / n;

    printf("Process\tBt\tPrt\tCt\tWt\tTat\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\t\n", p[i], bt[i], prt[i], ct[i], wt[i], tat[i]);
    }
    printf("Average waiting time = %.2f\n", awt);
    printf("Average turn around time = %.2f", atat);
    return 0;
}
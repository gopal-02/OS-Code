#include <stdio.h>
int main()
{
    int P[] = {1, 2, 3, 4};
    int At[] = {0, 1, 2, 3};
    int Bt[] = {6, 8, 7, 3};
    int n = sizeof P / sizeof P[0]; // For size of array
    int i, Ct[n], Wt[n], Twt = 0, Tat[n], Ttat = 0, s = 0;
    float Awt, Atat;

    for (i = 0; i < n; i++)
    {
        Ct[i] = s + Bt[i];
        s = Ct[i];
        Tat[i] = Ct[i] - At[i];
        Wt[i] = Tat[i] - Bt[i];
        Ttat = Ttat + Tat[i];
        Twt = Twt + Wt[i];
    }
    Awt = Twt / n;
    Atat = Ttat / n;

    printf("Process\tAt\tBt\tCt\tWt\tTat\n");

    for (i = 0; i < n; i++)
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", P[i], At[i], Bt[i], Ct[i], Wt[i], Tat[i]);

    printf("Average waiting time = %.2f\n", Awt); //%.2f for 2 decimal places
    printf("Average turn arount time = %.2f\n", Atat);
    return 0;
}


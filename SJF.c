#include <stdio.h>
int main()
{
    int P[] = {1, 2, 3, 4};
    int Bt[] = {6, 8, 7, 3};
    int n = sizeof P / sizeof P[0];
    int i, j, temp, Ct[n], Wt[n], Tat[n], sum = 0;
    float Awt, Atat, Twt = 0, Ttat = 0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(Bt[j]>Bt[j+1]){
               temp=Bt[j];
               Bt[j]=Bt[j+1];
               Bt[j+1]=temp;
               temp=P[j];
               P[j]=P[j+1];
               P[j+1]=temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        Ct[i] = sum + Bt[i];
        sum = Ct[i];
        Tat[i] = Ct[i];
        Wt[i] = Tat[i] - Bt[i];
        Ttat = Ttat + Tat[i];
        Twt = Twt + Wt[i];
    }
    Awt = Twt / n;
    Atat = Ttat / n;

    printf("Process   Bt   Ct   Wt    Tat\n");

    for (i = 0; i < n; i++)
        printf("  %d\t  %d    %d    %d      %d\n", P[i], Bt[i], Ct[i], Wt[i], Tat[i]);

    printf("Average waiting time = %.2f", Awt);
    printf("\nAverage turn arount time = %.2f", Atat);
    return 0;
}

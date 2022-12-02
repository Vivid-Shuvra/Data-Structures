#include<stdio.h>
#include<stdlib.h>

    int main()
    {
         int i, j, t, a[10]={10, 30, 70, 16, 95, 22};
         int n=6;

         for(i=0; i<n-1; i++)
            for(j=0; j<=n-2-i; j++)
                if(a[j]>a[j+1]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
            }
        printf("Bubble sort is...\n");
        for(i=0; i<n; i++)
        printf("%d  ", a[i]);

        return 0;
    }

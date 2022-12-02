#include<stdio.h>

    int main()
    {
        int a[100]={10,15,19,20,25,27};
        int i, j, x, m, n=6,z;
        for(j=n;j>=0;j--){
            if(n==100)
                break;
            else{
                printf("Enter your number: ");
                scanf("%d",&x);
                printf("Enter your position: ");
                scanf("%d", &m);
        m--;
        n++;

        if(m>=0 && m<=n-1){
            n--;
            z=n-m;
            for(i=n-1; i>=m; i--)
                a[i+1] =a[i];
            a[m]=x;
        }
        printf("\nNew Serial: ");
        for(i=0; i<n+1; i++)
            printf("%d  ", a[i]);
        printf("\n\n Number of shifting: %d\n", z);
            }
        }

        printf("Array is full\n\n");

        return 0;
    }

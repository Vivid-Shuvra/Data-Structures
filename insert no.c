#include<stdio.h>

    int main()
    {
        int a[100]={7,8,9,10,12,13};
        int i, x, m, n=6,z;
        scanf("%d %d", &x,&m);
        //m--;// when m-- used then n-- will execute...
        n++;

        if(m>=0 && m<=n-1){
            //n--;
            z=n-m;
            for(i=n-1; i>=m; i--)
                a[i+1] =a[i];
            a[m]=x;
        }
        printf("\nNew Serial: ");
        for(i=0; i<n+1; i++)
            printf("%d  ", a[i]);
        printf("\n\nNumber of shifting: %d\n", z);

        return 0;
    }

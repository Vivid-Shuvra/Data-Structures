#include<stdio.h>
#include<stdlib.h>

    int main()
    {
         int a[10]= {10, 50,25,80,90,45};
         int x, m, i, n=6;
         printf("Enter x & m:  ");
         scanf("%d %d", &x,&m);

         if((0<=m) && (m<=n-1)){
            for(i=n-1; m<=i; i--)
                a[i+1]= a[i];
            a[m]=x;
            n++;
         }
         else
            printf("Invalid index...\n");

            printf("\n The array is...\n");
            for(i=0; i<n; i++)
                printf("%d ", a[i]);

        return 0;
}

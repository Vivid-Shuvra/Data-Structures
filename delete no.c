#include<stdio.h>

    int main()
    {
        int a[100]={10,11,12,13,14,15,16};
        int i, j, flag=0, x, m, n=7;
        scanf("%d", &x);
        for(i=0; i<n; i++){
            if(a[i]==x){
                m=i;
                flag=1;
                for(j=i;j<=n-2;j++)
                    a[j]= a[j+1];
            }
        }

        if(flag==0)
          printf("\nNot found!\n");
        else{
        printf("\nNew Serial: ");
        for(i=0; i<n-1; i++)
            printf("%d  ", a[i]);
        printf("\n\n Number of shifting: %d\n", n-m-1);
        }

        return 0;
    }

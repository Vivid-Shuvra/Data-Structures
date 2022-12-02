#include<stdio.h>

    int main()
    {
        int a[100]={10,11,12,13,14,15,16};
        int i, j, k, l, x, m, n=7;
        for(k=n; k>=n; k--){
            if(n==0){
                 printf("Array is empty\n\n");
                 break;
            }
        else{
            l=0;
            printf("Enter your number: ");
            scanf("%d", &x);
            for(i=0;i<n;i++){
                if(a[i]==x){
                    m=i;
                    l=1;
                    for(j=i; j<=n-2;j++)
                        a[j]=a[j+1];
                    n--;
                }
            }
        if(l==0)
        printf("\nNot found\n\n");
        for(i=0; i<n; i++)
            printf("%d  ", a[i]);
        printf("\n\n Number of shifting: %d\n", n-m);
        }

      }


        return 0;
}

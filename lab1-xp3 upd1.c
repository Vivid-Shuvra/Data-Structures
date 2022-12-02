#include<stdio.h>
#include<stdlib.h>

    int a[10]= {10,50,25,80,90,45};
    int x, m, i, n=6;
    int main()
    {
         void myInsert();
         void mydisplay();
         myInsert();
         mydisplay();

        return 0;
}

    void mydisplay()
    {
        printf("\n The array is...\n");
            for(i=0; i<n; i++)
                printf("%d ", a[i]);

    }
    void myInsert()
{
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
}

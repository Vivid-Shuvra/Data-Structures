#include<stdio.h>
#include<stdlib.h>

    int a[10]= {10,50,25,80,90,45};
    int x, m, i, n=6;
    int main()
    {
         void myInsert();
         void myDisplay();
         int j;
         //myInsert();
         //myDisplay();
         for(; ;){
        j=menu();
        //printf("\n\t j= %d\n", j);

          switch(j){
              case 1: myInsert(); break;
              case 2: myDisplay(); break;
              case 3: break;
          }
          if(j==3)
          break;
        }

        return 0;
}

int menu()
{
    int op;
    printf("\n\n1. Insert\n");
    printf("2. Display\n");
    printf("3. Exit\n");
    printf("\n Enter your option: ");
    scanf("%d", &op);

    return (op);

}
    void myDisplay()
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

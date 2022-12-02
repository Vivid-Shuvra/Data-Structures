#include<stdio.h>
#include<stdlib.h>

     int a[10]= {10,50,25,80,90,45};
    int x, m, i,j,t, n=6;
    int main()
    {
         void myInsert();
         void myDisplay();
         void myDelete();
         void myBubble();
         int k;
         //myInsert();
         //myDisplay();
         for(; ;){
        k=menu();
        //printf("\n\t j= %d\n", j);

          switch(k){
              case 1: myInsert(); break;
              case 2: myDisplay(); break;
              case 3: myDelete(); break;
              case 4: myBubble(); break;
              case 5: break;
          }
          if(k==5)
          break;
        }

        return 0;
}

int menu()
{
    int op;
    printf("\n\n1. Insert\n");
    printf("2. Display\n");
    printf("3. Delete\n");
    printf("4. Bubble\n");
    printf("5. Exit\n");
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

    void myDelete()
    {
        printf("Enter value:");
        scanf("%d", &x);
        if(n>0)
        for(i=0; i<n; i++){
            if(a[i]==x){
                for(j=i; j<n; j++){
                    a[j]= a[j+1];
                }
                n--;
            }
        }
    else
        printf("Array empty...");
}
    void myBubble()
    {
        for(i=0; i<n-1; i++)
            for(j=0; j<=n-2; j++)
                if(a[j]>a[j+1]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
            }
            printf("Bubble sort is...\n");
        for(i=0; i<n; i++)
        printf("%d  ", a[i]);
    }

#include <stdio.h>

int top=-1;
int main()
{
     int arr[5] ;
     void mypush();
     void mypop();
     void mydisplay();
     int j;

     for(;;){
        j=menu();

          switch(j){
              case 1: mypush(arr); break;
              case 2: mypop(arr); break;
              case 3: mydisplay(arr); break;
              case 4: break;
          }
          if(j==4)
          break;
        }

        return 0;
}

int menu()
{
    int op;
    printf("\n\n1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("\n Enter your option: ");
    scanf("%d", &op);

    return (op);

}
void mypush(int arr[])
{
    int i,x;
    printf("Enter your number:");
    if(top<=4){
        top++;
        scanf("%d",&x);
        arr[top]=x;
    }
    else
        printf("\nArray is full");
}

void mypop(int arr[])
{

    if(top<0){
        printf("\nArray empty");
    }
    else{
        top--;
        printf("%d", arr[top]);

    }

}

 void mydisplay(int arr[])
    {
        int i;
        printf("\n The Stack is...\n");
            for(i=0; i<=top; i++)
                printf("%d ", arr[i]);
    }


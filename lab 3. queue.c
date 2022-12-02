#include<stdio.h>
int n = 3, ar[4],rear = -1,front = -1,x,y,k;
void enqueue()
{
    printf("\n\t\tENQUEUE FUNCTION:\n ");
    if(rear == n-1)
    {
        rear = -1;
        if(rear == front)
        {
            printf("Queue is full\n");
            rear = n-1;
        }
        else
        {
            printf("Enter an element: ");
            scanf("%d",&x);
            ar[rear] = x;
            printf("%d is pushed in the queue\n",x);
        }
    }
    else
    {
        if(rear+1 == front)
        {
            printf("Queue is full\n");
        }
        else
        {
            printf("Enter an element : ");
            scanf("%d",&x);
            ar[++rear] = x;
            printf("%d is pushed in the queue\n",x);
        }
    }
}
void dequeue()
{
    printf("\n\t\tDEQUEUE FUNCTION:\n ");
    if(rear == front)
    {
        printf("The queue is empty\n");
    }
    else
    {
        if(front == n-1)
        {
            front = 0;
        }
    else
     {
        front++;
        x = ar[front];
        printf("%d is deleted\n",x);
     }
   }
}
void display()
{
    printf("\n\t\tYOUR ULTIMATE QUEUE IS:\n ");
    int i;

    if( rear == front )
        printf("Queue is empty\n");
    else if (rear>front)
        for(i=front+1; i<rear+1; i++)
        printf("%d ", ar[i]);
    else if(rear<front){
        for(i=front; i<n; i++)
            printf("%d ", ar[i]);
        for(i=0; i<=rear;i++)
            printf("%d ", ar[i]);
    }
}
int menu()
{
    int q;
    printf("\nYOUR OPTIONS ARE:\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("Choose an option(1-4): ");
    scanf("%d",&q);
    return q;
}
int main()
{
    while(1)
    {
        k = menu();
        if(k == 4)
        {
            break;
        }
        switch(k)
        {
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:display();break;
            case 4:break;
        }
    }
    return 0;
}

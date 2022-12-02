#include<stdio.h>

    struct node
    {
        int data;
        struct node *next;
    };

    struct node *h, *q, *p;
     int n=5;

    int main()
    {
        void Create(int n);
        void Display();
        void Insert();
        void Delete();

        int k;

        for(; ;){
        k=menu();

        switch(k){
              case 1: Create(n); break;
              case 2: Insert(); break;
              case 3: Delete(); break;
              case 4: Display(); break;
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
    printf("\nHERE IS THE MENU:");
    printf("\n\n1. Create\n");
    printf("2. Insert\n");
    printf("3. Delete\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("\n Enter your option: ");
    scanf("%d", &op);

    return (op);

}

    void Create(int n)
    {

        int i, x;
        h=0; q=0;
        printf("\nCREATE:\n");
        for(i=0; i<n; i++){
            p=(struct node*)malloc(sizeof(struct node));
            printf("Enter X:");
            scanf("%d",&x);
            p->data= x;
            if(h==0)
                h=p;
            if(q!=0)
                q->next=p;

            q=p;
        }
        q->next=h;
    }

    void Insert(){
    int x,y;
    q=h;
    printf("\nINSERT:");
    printf("\nAfter which element to insert:");
    scanf("%d", &y);
    while(q!=0){
        if(q->data==y){
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &x);
        p->data=x; p->next=q->next; q->next=p;
        break;
        }
    else
        q=q->next;
      }
      printf("\n%d is inserted after %d", x, y);
    }

    void Delete(){
    int y;
    q=h;
    p=0;
    printf("\nDELETE:");
    printf("\nWhich data to be deleted:");
    scanf("%d", &y);
    while(q!=0){
        if(q->data==y){

            if(q==h)
                h=h->next;

            else
                p->next=q->next;
                break;
              }
            else{
                p=q;
                q=q->next;
            }
        }
        printf("%d is deleted", y);
    }

    void Display(){
    printf("\nTHE ULTIMATE LIST:\n");
    int count=0;
    p=h;
    while(count<(n+1)){ // p!=h
        printf("%d ", p->data );
        p=p->next;
        count++;
        }

    }


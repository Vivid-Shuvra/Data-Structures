#include<stdio.h>

    struct node
    {
        int data;
        struct node *next;
    };

    struct node *h, *q, *p;

    int main()
    {
        int n=5;
        void Create(int n);
        void Display();
        void Insert();
        void Delete();

        Create(n);
        Insert();
        Delete();
        Display();

        return 0;
    }

    void Create(int n)
    {

        int i, x;
        h=0; q=0;
        printf("CREAT:\n");
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
        q->next=0;
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
    }

    void Display(){
    printf("\nTHE ULTIMATE LIST:\n");
    p=h;
    while(p!=0){
        printf("%d ", p->data );
        p=p->next;
        }

    }


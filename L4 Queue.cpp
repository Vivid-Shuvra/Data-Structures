#include<bits/stdc++.h>
using namespace std;

int i, head = -1, rear = -1, n = 10;
int a[10], value;

int main()
{
    int menu();
    void enqueue(int x);
    void dequeue();
    void display(int h, int r);
    int j;
    for(;;){
        j = menu();
        switch(j){
            case 1: if((rear+1)%n == head){
                        cout << "The queue is full...!!!" << endl;
                    }
                    else{
                        cout<< "Enter your value : ";
                        cin >> value;
                        enqueue(value);
                    }
                    break;
            case 2: dequeue(); break;
            case 3: display(head, rear); break;
            case 4: break;
        }
        if(j == 4) break;
    }
    return 0;
}

int menu(){
    int op;
    printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\nEnter your option : ");
    scanf("%d", &op);
    return op;
}

void enqueue(int x){

    if(rear == -1 && head == -1){
        head = 0;
        rear = 0;
        a[rear] = x;
    }
    else{
        rear = (rear + 1)%n;
        a[rear] = x;
    }
}

void dequeue(){
    if(head == -1 && rear == -1){
        cout << "SORRY! The queue is EMPTY...!!!" << endl;
    }
    else if(head == rear){
        rear = -1;
        head = -1;
    }
    else{
        head = (head+1)%n;
    }
}

void display(int h, int r){
    if(h == -1 && r == -1){
        cout << "The queue is EMPTY...!!!" << endl;
    }

    else if(h > r){
        cout << "The queue is : ";
        for(i=h; i<n; i++)
            cout << a[i] << ends;
        for(i=0; i<=r; i++)
            cout << a[i] << ends;
    }
    else{
        cout << "The queue is : ";
        for(i=h; i<=r; i++){
            cout << a[i] << ends;
        }
    }
}

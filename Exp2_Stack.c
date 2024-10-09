/*
Implementation of Stacks using Arrays.

                                                  Name :-SHAIKH ASHRAFUL AYAAN MOHAMMAD ASIF
                                                  Roll No :- 22CO45
                                                  BATCH: 03
                                                  Academic year :- SE 2024-2025

Theory :- A Stack is a linear data is a Linear Data Structure in which data is inserted and deleted from the same end. This end of
stack is known as Top. The top of the stack is the most recently added item. The top of the stack is also know as LIFO (last In First Out) Data Structure, 
meaning the last element will be removed first from the Stack



STACK ADT:
           ADT: Abstract Data Type 
        Data: Sequence of any specific type of Data.

Operations :
Push(x): Adds an element x to the top of the stack.
Pop(): Removes an element from the top of the stack.
Top(): Returns the element at the top of the stack..
IsEmpty(): Returns true if the stack is empty, false otherwiIsFull(): Returns True if the stack is Full, false otherwise.
Display(): Display the content of the stack.
peek(): To See which Element is at the Top.
    
    
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct Stack{
    int data[MAX];
    int top;
};
void initialize(struct Stack *st){
    st->top = -1;
}
int isFull(struct Stack *st){
    if(st->top==MAX-1){
        printf("Stack is full\n");
        return 1;
    }
    else 
    return 0;
}
int isEmpty(struct Stack *st){
    if(st->top==-1){
        printf("Stack is Empty\n");
        return 1;
    }
    else {
      return 0;
 }
}

void push(struct Stack *st, int d) {
    if (st->top==MAX-1) {
        printf("Stack is already full\n");
        
    } else {
        st->top++;
        st->data[st->top]   = d;
    }
   
}
void pop(struct Stack *st,int d){
    if(st->top==-1){
        printf("Stack is  empty\n");
    }
    else{
        d=st->data[st->top];
        st->top--;
    }
}
void display(struct Stack *st,int d){
    if(st->top==-1){
        printf("Stack is empty..Nothing to display\n");
    }
    else{
        for(int i=0;i<=st->top;i++){
            printf("%d\t",st->data[i]);
        }
    }
}
void peak(struct Stack *st,int d){
    if(st->top==-1){
        printf("Stack is empty\n");
    }
    else{
        d=st->data[st->top];
        printf("Top element is %d\n",d);
    }
}
int main(){
    int choice;
    int num;
    struct Stack st;
    
while(1){
    printf("Select the options\n");
    printf("1. Initialize\n");
    printf("2. Push\n");
    printf("3. Pop\n");
    printf("4. Display\n");
    printf("5. Peak\n");
    printf("6. Exit\n");
scanf("%d",&choice);
    switch(choice){
        case 1:
        initialize(&st);
        break;
        case 2:
        printf("Enter the number to be pushed\n");
        scanf("%d",&num);
        push(&st,num);
        break;
        case 3:
        pop(&st,&num);
        printf("Popped number is %d\n",num);
        break;
        case 4:
        display(&st,num);
        break;
        case 5:
        peak(&st,num);
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("Invalid choice\n");
        break;
    }
}

}

/* Conclusion :
The program was executed without erros and the concept of Stack using Arrays was implemented effectively.
*/

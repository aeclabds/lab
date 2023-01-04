#include<stdio.h>
#include<stdlib.h>
struct node

{
 int data;
 struct node *link;
};
struct node *top;
void display()
{
  struct node *ptr;
 if(top==NULL)
   printf("\n stack is empty....");
 else
{
 
  ptr=top;
  printf("stack elements are");
 while(ptr!=NULL)
 {
      printf("%d\t",ptr->data);
      ptr= ptr->link;
 }
}
}

void push(int item)
{
 struct node *new;
 new=(struct node *)malloc(sizeof(struct node));
 new->data=item;
new->link=top;
top=new;
display();
}
void pop()
{
struct node *temp;
if(top==NULL)
  printf("\nstack is empty");
else
 temp=top;
printf("\npopped item is %d",top->data);
top=top->link;
free(temp);
display();
}

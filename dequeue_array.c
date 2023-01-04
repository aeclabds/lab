#include<stdio.h>
int a[20],size,front,rear;
void push_dq(int item)
{
   int i;
   if(front==0 && rear==size-1)
	printf("queue is full insertion is not possible");
   else if(rear==-1)
    {
      front=0;rear=0;
      a[front]=item;
    }
    else if(front>0)
   {
     front--;
     a[front]=item;
   }
  else
   {
     for(i=rear;i>=front;i--)
      a[i+1]=a[i];
     a[front]=item;
      rear++;
   }
}
void inject_dq(int item)
{
   int i;
   if(front==0 && rear==size-1)
	printf("queue is full insertion is not possible");
   else if(rear==-1)
    {
      front=0;rear=0;
      a[rear]=item;
    }
    else if(rear<size-1)
   {
     rear++;
     a[rear]=item;
   }
  else
   {
     for(i=front;i<=rear;i++)
      a[i-1]=a[i];
     a[rear]=item;
      front--;
   }
}

void pop_dq()
{
  if(front==-1)
      printf("queue is empty");
  else if(front==rear)
   {

       printf("deleted item is %d",a[front]);
       front=-1;
       rear=-1;
   }
   else
   {
      printf("deleted item is %d",a[front]);
       front++;
   }
}
void reject_dq()
{
  if(front==-1)
      printf("queue is empty");
  else if(front==rear)
   {

       printf("deleted item is %d",a[front]);
       front=-1;
       rear=-1;
   }
   else
   {
      printf("deleted item is %d",a[front]);
       rear--;
   }
}
void display_dq()
{
   int i;
    if(front==-1)
        printf("Queue is empty");
    else
     for(i=front;i<=rear;i++)
           printf("%d\t",a[i]);
}

void main()
{
     int item,opt;
      front=-1,rear=-1;
      printf("enter the size of the queue");
      scanf("%d",&size);
      do
      {
        printf("\nenter the optio\n");
        printf("1;push\n 2:pop\n 3.inject\n4.reject\n5.Display\n6.exit\n");
        scanf("%d",&opt);
       switch(opt)
       {
          case 1: printf("enter the item to be inserted");
                  scanf("%d",&item);
                  push_dq(item);
                  break;
          case 2:pop_dq();
                  break;
          case 3: printf("enter the item to be inserted");
                  scanf("%d",&item);
                  inject_dq(item);
                  break;
          case 4: reject_dq();
                  break;
          case 5: display_dq();
                  break;
          case 6: break;
          default: printf("invalid option");
        }
     }while(opt!=6);
 }
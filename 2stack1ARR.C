#include<stdio.h>
#include<stdlib.h>

#define MAX 15
int top=-1,top1=MAX;
int stack[MAX];
void push1(int data)
{
         if(top+1==top1)
         {
                  printf("Stack1 overflow\n");
         }
         else
         {
                  stack[++top]=data;
         }
}
void push2(int data)
{
                  if(top1-1==top)
         {
                  printf("Stack2 overflow\n");
         }
         else
         {
                  top1--;
                  stack[top1]=data;
         }
}
void pop1()
{
         if(top==-1)
         {
                  printf("Stack1 is empty");
         }
         else
         {
                  printf("\n Poped element from stack 1 is=%d",stack[top]);
                  top--;
         }
}
void pop2()
{
         if(top1==MAX)
         {
                  printf("Stack2 is empty");
         }
         else
         {
                  printf("\n Poped element from stack 2 is=%d",stack[top1]);
                  top1++;
         }
}
void display1()
{
     int i;
             if(top==-1)
         {
                  printf("Stack1 is empty");
         }
         else
         {
                  printf("\nstack 1 is : ");
                 for(i=top;i>-1;i--)
                  printf("  %d  ",stack[i]);
         }
}
void display2()
{
     int i;
             if(top1==MAX)
         {
                  printf("Stack2 is empty");
         }
         else
         {
                  printf("\nstack 2 is : ");
                 for(i=top1;i<MAX;i++)
                  printf("  %d  ",stack[i]);
         }
}

 main()
{
         push1(2);
         push1(2);push1(2);
         push1(2);
         push1(2);
         push1(2);
         push2(2);
         push2(2);
         push2(2);
         push2(2);
         push2(2);
         push1(2);
         push1(2);
         push1(2);
         push1(2);

         push1(2);
         push1(2);

         display1();
         printf("\n");
         display2();
return 0;
}

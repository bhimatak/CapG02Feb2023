#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int st[MAX];
int bottom = -1;
int top;

void pop();
void push();
void dispList();

int main()
{

        int ch=1;
        top = bottom;

        while(1)
        {
                printf("\nPress\n1. Push\n2. Pop\n3. Display List\n4. Exit");
                printf("\nChoice: ");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1:
                                        push();
                                        break;
                        case 2:
                                        pop();
                                        break;
                        case 3:
                                        dispList();
                                        break;
                        case 4:
                                        printf("\nThank you for using this SW\n");
                                        exit(EXIT_SUCCESS);
                                        break;
                        default:
                                        printf("\nYou have enter wrong choice...");
                }
  }


        return 0;

}

void push()
{
        if(top == (MAX -1))
        {
                printf("\nStack is FULL\n");
                return;
        }

        printf("\nEnter the value of new element to be pushed: ");
        scanf("%d",&st[++top]);
}

void pop()
{
        if(top == bottom)
        {
                printf("\nStack is Empty");
                return ;
        }
        printf("\nPoped out element is: %d\n",st[top--]);
}


void dispList()
{
        int it;

        if(top == bottom)
        {
                printf("\nStack is Empty\n");
                return ;
        }

        printf("\n=====List is======\n");
        for(it=top;it>=0;it--)
                printf("\n%d",st[it]);
        printf("\n\n");
}

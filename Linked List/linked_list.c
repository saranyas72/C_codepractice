#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int info;
	struct node *next;
};

void insAtBeg(struct node **pFront,int num)
{
	struct node *pNew;
	pNew=(struct node*)malloc(sizeof(struct node));
	pNew->info=num;
	pNew->next=NULL;

	if(*pFront!=NULL)
		pNew->next=*pFront;

	*pFront=pNew;
}

void delANum(struct node **pFront,int num)
{
	struct node *pCurr,*pDel;
	if((*pFront)->info==num)
		{
		free(*pFront);
		*pFront=(*pFront)->next;
		return;
		}
	pCurr=*pFront;
	while(((pCurr->next->info)!=num) &&  
(pCurr->next->next!=NULL))
		pCurr=pCurr->next;
	if(pCurr->next->info==num)
	{
		if(pCurr->next->next==NULL)
		{
			pDel=pCurr->next;
			pCurr->next=NULL;
		}
		else
		{
			pDel=pCurr->next;
			pCurr->next=pCurr->next->next;
		}
		free(pDel);
	}
	else
	{
		printf("\n\tNumber doesnt exist!");
		getch();
	}
}

void deleteAtBeg(struct node **pFront)
{
	struct node *pDel;

	if(*pFront==NULL)
	{
		printf("\n\n\tEmpty!");
		return;
	}
	pDel=*pFront;
	if((*pFront)->next==NULL)
		*pFront=NULL;
	else
		*pFront=(*pFront)->next;
	free(pDel);
}

 
void deleteAtEnd(struct node **pFront)
{
	struct node *pDel,*pCurr;

	if(*pFront==NULL)
	{
		printf("\n\n\tEmpty!");
		return;
	}
	if((*pFront)->next==NULL)
	{
	pDel=*pFront;
	*pFront=NULL;
	}
	else
	{
		pCurr=*pFront;
		while(pCurr->next->next!=NULL)
			pCurr=pCurr->next;
		pDel=pCurr->next;
		pCurr->next=NULL;
	}
	free(pDel);
}

void display(struct node *pFront)
{
	struct node *pCurr;
	if(pFront==NULL)
		printf("\n\n\tEmpty!");
	else
	{
		printf("\n\tList: ");
		pCurr=pFront;
		while(pCurr!=NULL)
		{
			printf("%d",pCurr->info);
			pCurr=pCurr->next;
			printf("->");
		}
		printf("NULL");
	}
	getch();
}
void printMiddle(struct node *head)
{
    int count = 0;
    struct node *mid = head;
 
    while (head != NULL)
    {
        /* update mid, when 'count' is odd number */
        if (count & 1)
            mid = mid->next;
 
        ++count;
        head = head->next;
    }
 
    /* if empty list is provided */
    if (mid != NULL)
        printf("The middle element is [%d]\n\n", mid->info);
        
    getch();
}
 
static void reverse(struct node *head_ref)
{
    struct node* prev   = NULL;
    struct node* current = head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    head_ref = prev;
    
    printf("\n\t The linked list is reversed...\n");
    getch();
}

int main()
	{
	int ch,num,pos;
	struct node *pFront,*pCurr;
	system("CLS");

	pFront=NULL;
	do
	{
	system("CLS");
	printf("\n\t**************************\n");
	printf("\n\t1- Insert \n\t2- Display\n\t3- Delete a Number\n\t4- Delete from Begining\n\t5-Delete from End\n\t6- Reverse\n\t7- Middle Element");
	printf("\n\t8- Exit\n");
	printf("\n\t**************************\n");
	printf("\n\tEnter choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
		printf("\n\tEnter a no: ");
		scanf("%d",&num);
		insAtBeg(&pFront,num);
		break;

	case 2:
		display(pFront);
		break;
		
    case 3:
           printf("\n\tEnter a no: ");
   		scanf("%d",&num);
		delANum(&pFront,num);
		break;
 
	case 4:
		deleteAtBeg(&pFront);
		break;

	case 5:
		deleteAtEnd(&pFront);
		break;
	case 6:
           reverse(&pFront);
           break;
     case 7:
           printMiddle(pFront);
           break;
	case 8:
		exit(0);

	default:
		printf("Wrong Choice!");
		getch();
	}
	}while(ch<10);
	getch();
    return 0;
}

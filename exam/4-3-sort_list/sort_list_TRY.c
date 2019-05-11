
#include "list.h"
#include <stdio.h>
#include <stdlib.h>


t_list *cl(void *d)
{
	t_list *p;

//	printf("\n222 %d", *(int *)d); // REMEMBER THIS!!!
	p = (t_list *)malloc(sizeof(t_list));
	p->data = d;
	p->next = NULL;
//	printf("\n222 %d", *(int *)p->data);
	return (p);
}

void pl(t_list *p)
{
	while (p)
	{
		printf("\n333  %d", *(int *)p->data);	
		p = p->next;
	}
}

// compare p->data
int cd(int d1, int d2)
{
	return (d1 - d2);
}

// swap *data
void sd(void *d1, void *d2)
{
	int *tmp;
	int *p1 = (int *)d1;
	int *p2 = (int *)d2;

	tmp = p2;
	p2 = p1;
	p1 = tmp;
}

// JUST THE SORTING PART IS NOT WORKING ???
// bubble sort
//t_list *bl(t_list *p, int (*cmp)()) // can also leave args empty!!!
// note, the syntax for passing func as arg!!!
t_list *bl(t_list *p, int (*cmp)(int, int))
{
	t_list *p1;
	t_list *p2;
	int swapped;

	// edge case
	if (!p)
		return (NULL);


/*
	p1 = p;
	while (p1)
	{
		p2 = p1->next;
		while (p2)
		{
			if (!(cd(*(int *)p1->data, *(int *)p2->data)))
			{
				sd(p1->data, p2->data);
			}
			p2 = p2->next;
		}
		p1 = p1->next;
	}
*/

	p2 = NULL;
	do
	{
		swapped = 0;
		p1 = p;
		while (p1->next != p2)
		{
			if (!cd(*(int *)p1->data, *(int *)p1->next->data))
			{
				sd(p1->data, p1->next->data);
				swapped = 1;
			}
			p1 = p1->next;
		}
		p2 = p1;
	}
	while (swapped);

	return (p);
}

int main()
{
	t_list *p;
	int n1 = 3;
	int n2 = 2;
	int n3 = 1;

	// create nodes
	p = cl(&n1);  
	p->next = cl(&n2);  
	p->next->next = cl(&n3);  

	//printf("\n111 %d", *(int *)p->data);
	//printf("\n111 %d", *(int *)p->next->data);
	//printf("\n111 %d", *(int *)p->next->next->data);

	// sort nodes
	p = bl(p, cd); // note, syntax for passing func!!!

	// print nodes
	pl(p);
}





/*
	p1 = p;
	while (p1->next)
	{
		if (!cd(*(int *)p1->data, *(int *)p2->data))
		{
			sd(p1->data, p2->data);
			p1 = p;
		}
		else
		{
			p1 = p1->next;
		}
	}
*/

/*
	p2 = NULL;
	do
	{
		swapped = 0;
		p1 = p;
		while (p1->next != p2)
		{
			if (!cd(*(int *)p1->data, *(int *)p1->next->data))
			{
				sd(p1->data, p1->next->data);
				swapped = 1;
			}
			p1 = p1->next;
		}
		p2 = p1;
	}
	while (swapped);
*/
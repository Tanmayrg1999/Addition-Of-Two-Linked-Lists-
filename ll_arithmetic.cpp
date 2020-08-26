#include<iostream>
#include<math.h>
using namespace std;
struct node{
	int data;
	node*next;
	int no;
};
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int totdigit(int n)
{
	int c=0;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	return c;
}
int s1=0,s2=0;
node *head1=NULL;
node *head2=NULL;
void insert(int data,int no)
{
	node *newnode=new node;
	newnode->next=NULL;
	newnode->data=data;
	newnode->no=no;
	if(no==1)
	{
		s1++;
	node *n=head1;
	if(head1==NULL)
	{
		head1=newnode;
	}
	else
	{
		while(n->next!=NULL)
		{
			n=n->next;
		}
			n->next=newnode;
	}
}
if(no==2)
{
	s2++;
	node *n=head2;
	if(head2==NULL)
	{
		head2=newnode;
	}
	else
	{
		while(n->next!=NULL)
		{
			n=n->next;
		}
			n->next=newnode;
	}	
}
}

void display(int no)
{
	node *p;
if(no==1)
{
	p=head1;
}
if(no==2)
{
	p=head2;
}
	while(p!=NULL )
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
void sum()
{
	node *p=head1,*q=head2;
	int n1=0,n2=0;
	for(int i=0;i<s1;i++)
	{
		n1=n1+(p->data)*pow(10,s1-i-1);
		p=p->next;
	}
	for(int i=0;i<s2;i++)
	{
		n2=n2+(q->data)*pow(10,s2-i-1);
		q=q->next;
	}
cout<<n1+n2;
}
int main()
{
	insert(7,1);
	insert(2,1);
	insert(4,1);
	insert(3,1);
	cout<<"1 st linked list is:"<<endl;
	display(1);
	insert(5,2);
	insert(6,2);
	insert(4,2);
	cout<<"2nd linked list is:"<<endl;
	display(2);
	sum();
}

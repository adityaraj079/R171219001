#include<iostream> 
using namespace std; 
struct Node 
{ 
int data; 
Node *link; 
}; 
Node *top = Null; 
// Aditya Raj part start
void push(int max, int *curr) 
{ 
if(max<=*curr) 
{ 
cout<<”\n Stack is FULL\n”; 
} else 
{ 
int value; 
cin>>value; 
Node *ptr = new Node; 
ptr->data = value; 
ptr->link = top; 
*curr ++; 
} 
} 
// Aditya Raj's part ends
                //  R171219001's part start from here 
void pop(int *curr) 
{ 
if(*curr == 0) 
cout<<“\nStack is EMPTY\n ”; 
else 
{ 
Node *ptr = top; 
top = top -> link; 
delet(ptr); 
*curr--; 
} 
}
//R171219001's part ends here


// Akshat's Part start from here
int main()
{
	int current = 0, maximum, choice;
	cout<<"Enter the maximum value of stack:";
	cin>>maximum;
	A: cout<<"\nEnter your choice\n1.Insertion\n2.Deletion\n3.Display top value\n4.Exit\n:";
	   cin>>choice;
	   switch(choice)
	   {
		   case'1': push(maximum, &current); goto A;
		   case'2': pop(&current); goto A;
		   case'3': cout<<top->data; goto A;
		   case'4': exit(0);
		   default: cout<<"Enter the choice for given above"; goto A;
	   }
	return 0;
}
// Akshat's Part end here

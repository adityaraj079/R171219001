#include<iostream> 
using namespace std; 
struct Node 
{ 
int data; 
Node *link; 
}; 
Node *top = Null; 
                // from R171219001
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
// Akshat's Part sart from here
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

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

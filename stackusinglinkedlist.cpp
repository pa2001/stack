#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int val;
  node* next;
};
node* head=NULL;
int v,pos;
void push()
{
  node* ptr=new node();
  if(ptr==NULL)
  cout<<"Not able to push try again"<<endl;
  else if(head==NULL)
  {
    cout<<"Enter value-";
    cin>>v;
    ptr->val=v;
    ptr->next=NULL;
    head=ptr;
  }
  else
  {    
    cout<<"Enter value-";
    cin>>v;
    ptr->val=v;
    ptr->next=head;
    head=ptr;
  } 
}
void pop()
{
  node* ptr=head;
  head=head->next;
  free(ptr);
}
void isempty()
{
  if(head==NULL)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
void peek()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  cout<<head->val<<endl;
}
void count()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    int count=1;
    node* ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next,count++;
    cout<<count<<endl;
  }
}
void change()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    cout<<"Enter position-";
    cin>>pos;
    cout<<"Enter value-";
    cin>>v;
    for(int i=0;i<pos-1;i++)
    {
      ptr=ptr->next;
    }ptr->val=v;
  }
}
void display()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    while(ptr!=NULL)
    {
      cout<<ptr->val<<" ";
      ptr=ptr->next;
    }cout<<endl;
  }
}
int main()
{
  int choice=0;
  cout<<"Press 1 for push\nPress 2 for pop\nPress 3 for top\nPress 4 for isempty\nPress 5 for isfull\nPress 6 for peek\nPress 7 for count\nPress 8 for change\nPress 9 for display\nPress 10 for exit\n"<<endl;
  while(choice!=10)
  {
    cout<<"Enter choice-";
    cin>>choice;
    switch(choice)
    {
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 4:
      isempty();
      break;
      case 6:
      peek();
      break;
      case 7:
      count();
      break;
      case 8:
      change();
      break;
      case 9:
      display();
      break;
      case 10:
      display();
      break;
    }
  }
}

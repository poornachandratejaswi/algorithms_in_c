	//algorithm for the adding an element into the stack
  void push()
  {
   int item;
  if(top==size-1)
  {
  printf("\n stack is full");
  }
  else
  {
  top=top+1;
  printf("\n\n Enter element in stack: ");
  scanf("%d",&s.item);
  s.stack[top]=s.item;
  }
  }

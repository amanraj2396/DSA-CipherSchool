#include<stdio.h>
using namespace std;

class stack
{
     public: 

      int *arr;
      int *size;
      int *top;

      Stack(inrt size)
      {
          this->size = size;
          arr = new int[size];
          top = -1;
      }

      void push(int element)
      { 
        if(size -top >1 )
        {
          top++;
          arr[top] = element;
        }
        else
        {
          cout<,"the satck is already full"<<endl;
        }
      }

       void pop()
       {
         if(top>=0)
         {
           top--;
         }
         else
         {
           cout<<"the stack is currently empty and there are no elements to pop"<<endl;
         } 

       }
        void peek
       {
         if(top<0) cout<<"there are no elements in the stack to peek"<<endl;
         else
         { 
           cout<<"the elements at the top of the stack is "<<arr[top]<<endl;
            //return arr[top];
         } 
       }

        bool is Empty()
        {
          if (top<0) 
          {
            cout<<"the stack is currently empty" <<endl;
              return true;
          }
          return false;
        }    
                
};  

int main()
{
     stack new_stack(5);

      new_stack.peek();
      new_stack.push(5);
      new_stack.peek();
      new_stack.push(4);
      new_stack.peek();
      new_stack.push(3);
      new_stack.push(2);
      new_stack.push(1);
      new_stack.push(100);   //this element will not get push because the stack is already full

      new_stack.peek();
  
      new_stack.peek();
        
     retutn 0;
}
  

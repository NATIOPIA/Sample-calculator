#include<iostream>
using namespace std;


void showmenu();
int ADD(float,float);
int subtraction(float,float);
int multiplication(float,float);
int division(float,float);


int main()
{
  float x,y;
  int choice;
  do{
      showmenu();
      cin>>choice;
    switch(choice){
        case 1:
            cout<<"enter the numbers"<<endl;
            cin>>x>>y;
            cout<<"the result is="<<addition(x,y)<<endl;
          break;
        case 2:
            cout<<"enter the numbers"<<endl;
            cin>>x>>y;
            cout<<"the result is="<<subtraction(x,y)<<endl;
          break;
        case 3:
            cout<<"enter the numbers"<<endl;
            cin>>x>>y;
            cout<<"the result is="<<multiplication(x,y)<<endl;
          break;
        case 4:
            cout<<"enter the numbers"<<endl;
            cin>>x>>y;
            cout<<"the result is="<<division(x,y)<<endl;
          break;
        case 5:
            break;  
           
    }
    
  }while(choice!=5);
  return 0;
}



void showmenu()
{
  cout<<"menu"<<endl;
  cout<<"1: Addition"<<endl;
  cout<<"2: Subtraction"<<endl;
  cout<<"3: Multiplication"<<endl;
  cout<<"4: Division"<<endl;
  cout<<"5: Exit"<<endl;
  cout<<"Enter your choice"<<endl;
}


int ADD(float x,float y)
{
  return (x+y);
}


int subtraction(float x,float y)
{
  return (x-y);
}


int multiplication(float x,float y)
{
  return (x*y);
}


int division(float x,float y)
{
  return (x/y);
}
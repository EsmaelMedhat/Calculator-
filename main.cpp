#include <iostream>
using namespace std;
string checknumber;
int total;
char op3;
void display()
{
cout<<"      ______________________________________     \n\n";
cout<<"      ____________  Calculator _____________     ";
  cout<<"\n\n      ______________________________________     ";
 char nums[3][4]={'1','2','3','-','4','5','6','x','7','8','9','/'};
char more_num[]={'0','.','='};
cout<<"\n\n";
cout<<"                   NUMBERS   \n";
cout<<"\n";
for(int i=0;i<3;i++)
{cout<<"                ";
    for(int m=0;m<4;m++)
{
    cout<<"|"<<nums[i][m]<<"|";
}
cout<<endl;
}
cout<<"                   ";
for(int i=0;i<3;i++)
{
cout<<"|"<<more_num[i]<<"|";
}
cout<<endl;
}
int continue_operation(int m,char opp,char a)
{
opp=op3;
   cout<<"num:";
    cin>>m;
      if(opp=='x')
    total*=m;
if(opp=='+')
    total+=m;
    if(opp=='/')
    total/=m;
    if(opp=='-')
    total-=m;
cout<<"operator:";
cin>>a;
op3=a;
if(a=='=')
return total;
else{
   int h;char n,c;
    return continue_operation(h,n,c);
}
}
int first_operation(int n1,char op1,int n2)
{
 int n3;char op2;
char op4;
    cout<<"num:";
   cin>>n1;
    cout<<"operator:";
    cin>>op1;
    cout<<"num:";
    cin>>n2;
    if(op1=='x')
    total=n1*n2;
    if(op1=='-')
    total=n1-n2;
    if(op1=='/')
    total=n1/n2;
     if(op1=='+')
    total=n1+n2;
cout<<"operator:";
      cin>>op3;
 if(op3=='='){
return total;}
else{return continue_operation(n3,op2,op4);}
}
int exit(){return 0;}
void retry();

void run(){
int n1,n2;
char op;
display();
cout<<first_operation(n1,op,n2);
cout<<endl;
retry();
}
int main()
{
run();
 return 0;
}
void retry()
{
  char op;
  int n1,n2;
  cout<<"\n1:To Again or Any number to Exit\n";
    cin>>checknumber;
    if(checknumber=="1"){
system("cls");
run();
    }
else{cout<<exit();}
}

# include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"enter number for operation :";
cin>>a>>b;

char op;
cout<<"enter operation(+,-,*,/):";
cin>>op;

switch (op)
{
case '+':cout<<a+b<<endl; 
    break;
    case '-':cout<<a-b<<endl; 
    break;
    case '*':cout<<a*b<<endl; 
    break;
    case '/':cout<<a/b<<endl; 
    break;

default:cout<<"invalid plz calculate by your self ^_^";
    break;
}



    return 0 ;
}
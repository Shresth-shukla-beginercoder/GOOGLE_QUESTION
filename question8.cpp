# include<iostream>

# include<math.h>
using namespace std;

int main(){

int n ;
cout<< "enter number ";
cin>>n;

int sum = 0 ;
int orian = n;

while(n>0){
    int loda = n%10;
    sum = sum + pow(loda,3);
    n= n/10;
}

if(sum == orian){
    cout<<"armstrong number ";

}else{
    cout<<"not armstrong number";

}

    return 0 ;
}
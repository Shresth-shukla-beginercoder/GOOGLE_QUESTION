#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"enter number :";
cin>>a;
cout<<"enter number :";
cin>>b;
int i;
int j;
for( i =a ; i <=b ;i++){
    for( j=2 ;j<i;j++){
        if(i%j==0){
            break;
        }
}if(j==i){
    cout<<i<<endl;
}
    } 
            

return 0;
}
# include<iostream>
# include<cmath>
using namespace std;
int main (){
int n ;
cout<<"enter number";
cin>>n;
bool num;

for(int i = 1; i <=sqrt(n);i++){
    if(n%i==0){
        cout<<"non prime";
num =1;
break;
    }
}
if(num == 0){
    cout<<"prime";
    
}
    return 0 ;
}
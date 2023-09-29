# include <iostream>
using namespace  std;

bool pytha(int x , int y , int z ){

    int a = max(x,max(x,z));
int b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }
    else{
        b= x;
        c=y;
    }if(a*a==b*b +c*c){
        return true;
    }else{
        return false;
    }
    
} 
int main(){
int x,y,z;
for(int i = 1; i <=3;i++){
    cout<<"enter number = ";
    if(i==1){
        cin>>x;
    }
    if(i==2){
        cin>>y;
    }
    if(i==3){
        cin>>z;
    }
    cout<<"---------------\n";
}
if(pytha(x, y , z)){
    cout<<"phythagorus triplets \n";
    cout<<"=====================\n";
}else{
     cout<<"not phythagorus triplets \n";
    cout<<"=========================\n";
}
    return 0 ;
}
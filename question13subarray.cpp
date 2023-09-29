# include<bits/stdc++.h>

using namespace std;

 int main(){
int n;
cout<<"Enter number => ";
cin>>n;
cout<<"==================\n"; 

int arr[n];
cout<<"Enter arrays => ";
for(int i = 0 ; i <n;i++){
    cin>>arr[i];
}
cout<<"----------------------\n";
int current = 0;
for(int i = 0 ; i <n; i++){
current =0;
    for(int j =i ;j<n;j++){

       current+= arr[j];

        cout<<current<<endl;
    }
}

    return 0 ;
 }
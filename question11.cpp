# include<bits/stdc++.h>

using namespace std;

int main (){

 int n;
 
 cout<<"Enter number => ";
 cin>>n;
 cout<<"================\n";
 cout<<"Enter arrays =>> "<<endl;
int arr[n];

 for( int i =0 ; i <n; i++){
cin>>arr[i];
cout<<" \n";
 }
cout<<"-------------------------------------------\n";
int maxNo = INT_MIN;
int minNo = INT_MAX;
for(int i = 0; i < n ; i++){
maxNo = max(maxNo,arr[i]);
minNo = min(minNo,arr[i]);

}
cout<<"===============================================\n";
cout<<"Max number is =>> "<<maxNo<<endl;
cout<<"------------------------\n";
cout<<"Min number is =>> "<<minNo<<endl;
cout<<"------------------------\n";

    return  0;
}
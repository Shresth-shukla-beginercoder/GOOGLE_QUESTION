# include<bits/stdc++.h>
using namespace std;

int main (){

int mx = INT_MIN;// or mx = -19999999
int n ;

cout<<"Enter number => ";
cin>>n;
cout<<"=================\n";
int arr[n];
cout<<"Enter arrays => ";
for(int i = 0 ; i<n;i++){
cin>>arr[i];
}
cout<<"====================\n";
for(int i = 0 ; i <n; i++){
    mx = max(mx,arr[i]);
cout<<"Max till [i] => "<<mx<<endl;
}

    return 0 ;

}
#include<bits/stdc++.h>

using  namespace std;

int main (){
int v;
cout<<"Enter number = >" ;
cin>> v;
cout<<"-------------------\n";

int arr[v];
for(int i =0 ; i<v ;i++){
    cin>>arr[i];
}
int cursum = 0;
int maxsum = INT_MIN;

for(int i =0 ; i<v ;i++){
cursum += arr[i];
if(cursum <0){
    cursum =0;
}
maxsum = max(maxsum,cursum);
}
cout<<"Max sum is =>> "<<maxsum<<endl;

    return 0 ;
}
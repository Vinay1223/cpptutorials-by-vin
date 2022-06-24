#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int sum=0,t=n,x;
   while (n>0){
      x = n % 10;
      sum+=pow(x,3);
      cout<<pow((x),3)<<endl;
      n=n/10;
      cout<<sum<<endl;
   }
   if (sum==t){
      cout<<"the number is armstrong";
   }
   else{
      cout<<"not an armstrong";
   }
   return 0;
}
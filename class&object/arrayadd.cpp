#include <iostream>
using namespace std;
int main(){
   float A[100];
   int n,i;
   float sum=0;
   cout<<"How many numbers : ";
   cin>>n;
   cout<<"Input Numbers :"<<endl;
   for(i=0;i<n;i++){
      cin>>A[i];
      

   }
   
   for(int i=0;i<n;i++){
    sum=sum+A[i];

   }
   cout<<"Result : "<<sum;


}
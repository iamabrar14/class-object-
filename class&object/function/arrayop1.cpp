#include<iostream>
using namespace std;
 
int main() {
   int i, arr[100], sum, num;
 
   cout<<"\nEnter no of elements :";
   
   cin>>num;
   cout<<"Enter values : ";
   for (i = 0; i < num; i++)
      cin>>arr[i];
 
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
   for (i = 0; i < num; i++)
      
   cout<<" "<<arr[i]<<endl;
   cout<<"Sum = "<<sum;
   return 0;
}
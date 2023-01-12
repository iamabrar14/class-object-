#include <iostream>
using namespace std;
int main(){
   int A[2][3];
   
   int r,c;
   cout<<"Enter elements for this matrix : ";
   for(r=0;r<2;r++){
    for(c=0;c<3;c++){
     cout<<"A["<<r<<"]["<<c<<"] = ";
     cin>>A[r][c];

    }

   }
   for(r=0;r<2;r++){
    for(c=0;c<3;c++){
    
     cout<<A[r][c]<<" ";
     }
    cout<<endl;
 }
 
 return 0;
}
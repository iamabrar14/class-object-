#include <iostream>
using namespace std; //printing odd index
int main(){
     int a[100];
     int i,n;
     cout<<"How many numbers : "<<endl;
     cin>>n;
     cout<<"Enter elements : ";
     for(i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
     }
     for(i=0;i<n;i++){
        if(i%2!=0){
        cout<<a[i]<<" "<<endl;
        }
     }
     return 0;

}
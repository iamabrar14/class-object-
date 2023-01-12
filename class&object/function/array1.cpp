#include <iostream>
using namespace std;
int main(){
     int a[20];
     int i;
     cout<<"Enter elements : ";
     for(i=0;i<5;i++){
        cout<<"a["<<i<<"]";
        cin>>a[i];
     }
     for(i=0;i<5;i++){
        cout<<a[i]<<" "<<endl;
     }
     

}
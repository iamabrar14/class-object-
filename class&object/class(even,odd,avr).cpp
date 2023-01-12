#include <iostream>
using namespace std;
class evenodd{
 public:
 int numb(int x){
 if(x%2==0){
    cout<<"even"<<endl;
 }
 else{
    cout<<"odd";
 }
 }

};
class avr{
public:
int x,y;
float aver(float x,float y){
    return (x+y)/2 ;
}

};
int main(){
   evenodd a1;
   avr a2;
   int a,b,c;
   cout<<"Enter a number for testing even odd"<<endl;
   cin>>a;
   a1.numb(a);
   cout<<"***********************************************"<<endl;
   cout<<"Enter two number for average"<<endl;
   cin>>b>>c;
   cout<<"Average : "<<a2.aver(b,c)<<endl;
   return 0;
}
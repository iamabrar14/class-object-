#include <iostream>
using namespace std;
class avr{
    public:
   
    
    float a(float x,float y){
   float  z=(x+y)/2;
    cout<<"Answer is : "<<z<<endl;
    }
} ;
int main(){
    float x,y;
    avr obj;

    cout<<"Enter two numbers for average operation : "<<endl;
    cin>>x>>y;
   obj.a(x,y);
   return 0;
    
}
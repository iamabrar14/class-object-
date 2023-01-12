#include <iostream>
#include <cmath>
using namespace std;
class circle{
  public:
  int diameter(int r){
    int d;
    d=2*r;
    cout<<"Diameter : "<<d<<endl;
   return 0;
  }
   int area(int r){
    int a;
    a=3.1416*pow(r,2);
    cout<<"Area: "<<a<<endl;
    return 0;
   }
   
};
int main(){
    circle obj;
  int b;
  cout<<"Enter radius :"<<endl;
  cin>>b;
  obj.diameter(b);
  obj.area(b);
  return 0;

}
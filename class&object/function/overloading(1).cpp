#include <iostream>
using namespace std;
class ovrld{
    public :
  void add(){
    int x,y,z;
    cout<<"Enter two number : "<<endl;
    cin>>x>>y;
    z=x+y;
    cout<<"Result : "<<z<<endl;

  } 
  void add(int x,int y){
      int z;
      z=x+y;
      cout<<"The result : "<<z<<endl;
}
void add(float x,float y){
    float z;
    z=x+y;
    cout<<"The result : "<<z<<endl;
}
};
int main(){
      ovrld obj;
      int a,b;
      cout<<"Enter two integer numbers "<<endl;
      cin>>a>>b;
      obj.add(a,b);
      float c,d;
      cout<<"Enter two float number : "<<endl;
      cin>>c>>d;
      obj.add(c,d);
      
      return 0;



}
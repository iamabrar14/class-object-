#include <iostream>
#include <cmath>

using namespace std;
class first{
public:
int add(int i,int j){

return i+j;


}
int cube(int i){

return pow(i,3);

}


};


int main()
{  first fk;
   int n,k,l;
   cout<<"Enter value for add"<<endl;
   cin>>n>>k;
   cout<<"Enter value for cube"<<endl;
   cin>>l;
   cout <<"Result of adding :"<<fk.add(n,k)<<endl;
   cout<<"Cube of "<< l<<endl;
   cout<<fk.cube(l)<<endl;
}

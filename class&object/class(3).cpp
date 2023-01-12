#include <iostream>
using namespace std; //creating & using multiple object in 1 programm 
class car {
    public:
  string brand;
 long int totalCar;
  long int manPower;
};
int main(){
    car obj1;
    obj1.brand="Toyota";
    obj1.totalCar=10000;
    obj1.manPower=20000;
    cout<<"Details of object 1 : "<<endl;
    cout<<"Brand Name : "<<obj1.brand<<endl;
    cout<<"Total Car : "<<obj1.totalCar<<endl;
    cout<<"Man power : "<<obj1.manPower<<endl;
    car obj2;
    obj2.brand="Noah";
    obj2.totalCar=30000;
    obj2.manPower=40000;
    cout<<"Details of object 2 : "<<endl;
    cout<<"Brand Name : "<<obj2.brand<<endl;
    cout<<"Total Car : "<<obj2.totalCar<<endl;
    cout<<"Man power : "<<obj2.manPower<<endl;

    car obj3;
    obj3.brand="Volvo";
    obj3.totalCar=40000;
    obj3.manPower=45000;
    cout<<"Details of object 3 : "<<endl;
    cout<<"Brand Name : "<<obj3.brand<<endl;
    cout<<"Total Car : "<<obj3.totalCar<<endl;
    cout<<"Man power : "<<obj3.manPower<<endl;

    car obj4;
    obj4.brand="BMW";
    obj4.totalCar=60000;
    obj4.manPower=50000;
    cout<<"Details of object 4 : "<<endl;
    cout<<"Brand Name : "<<obj4.brand<<endl;
    cout<<"Total Car : "<<obj4.totalCar<<endl;
    cout<<"Man power : "<<obj4.manPower<<endl;

  return 0;
}
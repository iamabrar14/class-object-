#include <iostream>
using namespace std;
class numbers{
    public:
    float total(float a,float b,float c,float d,float  e){
     float  t;
     t=a+b+c+d+e;
     cout<<"Total marks : "<<t<<endl;
     return 0;

    }
    float average(float a,float b,float c,float d,float e){
        float av;
        av=(a+b+c+d+e)/5;
        cout<<"Average marks : "<<av<<endl;
    }
   
    
};
int main(){
    numbers obj;
    cout<<"Enter numbers of five students "<<endl;
    float a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    obj.total(a,b,c,d,e);
    obj.average(a,b,c,d,e);
    

    return 0;
}
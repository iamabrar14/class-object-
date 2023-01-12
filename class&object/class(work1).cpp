#include<iostream>
#include<cmath>
using namespace std;

class FirstClass{
public:
    int add(int i, int j){
        return i+j;
    }
    int cube(int i){
        return pow(i, 3);
    }

};

class SecondClass{
private:
    int len;
    int ar[99999];
public:
    void arr(int n){
        len = n;
        for(int i = 0; i<n; i++){
            cout << "Input value of arr["<<i<<"]: ";
            int num;
            cin >> num;
            ar[i] = num;
        }
        cout << "----------" << endl << "Display" << endl << "----------" << endl;
        for(int i = 0; i<n; i++){
            cout << "arr["<<i<<"]: " << ar[i] << endl;
        }
    }
};




int main(){
    FirstClass fc;
    int a,b,c;
    cout<<"Enter two number "<<endl;
    cin>>a>>b;
    cout<<"Enter number for cube :"<<endl;
    cin>>c;
    cout << "Add of two number =" << fc.add(a, b) << endl;
    cout << "Cube  =" << fc.cube(c) << endl;
    cout << "---------" << endl << "Work of Second Class: ";
    cout << "Input Size: ";
    int len;
    cout<<"Enter lenght : "<<endl;
    cin >> len;

    SecondClass sc;
    sc.arr(len);


    return 0;
}
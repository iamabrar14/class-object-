#include <bits/stdc++.h>
using namespace std;
class addsub{
 public:   
int add(int x,int y){

    return x+y;
}
int sub(int x,int y){
    return x-y;
}
};

int main(){
 addsub obj;
 int x,y;
 cout<<"Input two integer numbers for operation :"<<endl;
 cin>>x>>y;
 cout<<"Result of adding two : "<<obj.add(x,y)<<endl;
 cout<<"Result of substraction: "<<obj.sub(x,y)<<endl;
 obj.sub(x,y);

}
#include<iostream>
using namespace std;
class A{
  private: 
    int x;
  public: 
   A(): x(10) {}
   A(int a): x(a) {}
   void setX(int i){
      x = i;
   }
   int getX(){
    return x;
   }
};

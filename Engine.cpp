#include <iostream>
using namespace std;
class Engine{
  private:
    string make;
  public:
    Engine() : make("2NZ-FE") {}
    Engine(string m) : make(m) {}
    void setMake(string m){
      make = m;
    }
    string getMake(){
      return make;
    }
};
class Car{
  private:
    string company;
    string model;
    Engine engine;
  public:
    Car() : company("Toyota") , model("Corolla-GLI") {}
    Car(string c , string m , string e) : company(c) , model(m) , engine(e) {}  
    void setCompany(string c){
      company = c;
    }
    void setModel(string m){
      model = m;
    }
    void setEngine(Engine e) {
      engine = e;
    }
    string getCompany(){
      return company;
    }
    string getModel(){
      return model;
    }
    string getEngine(){
      return engine.getMake();
    }
    void display(){
      cout << "Company: " << company << endl;
      cout << "Model: " << model << endl;
      cout << "Engine: " << engine.getMake() << endl;
    }
};
int main(){
  Car myCar;
  myCar.display();
  Car newCar("Toyota","CSISA","V8");
  newCar.display();
}
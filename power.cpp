#include<iostream>
using namespace std;
class Fan {
    private:
    bool power;
    public:
    Fan() {
        power = false;
    };;
    Fan(bool bod) {
        power = bod;
    }
    ~Fan(){
        cout << "Fan object destroyed" << endl;
    }
    void ON() {
        power = true;
    }
    void OFF() {
        power = false;
    }
    void printStatus(){
        if(power) {
            cout << "Fan is ON" << endl;
        } else {
            cout << "Fan is OFF" << endl;
        }
    }
};
class SFan : public Fan {
    private:
    int speed;
    public:
    SFan() {
        speed = 0;
    }
    SFan(int s){
        speed = s;
    }
    SFan(bool bod, int s) : Fan(bod) {
        speed = s;
    }
    ~SFan(){
        cout << "SFan object destroyed" << endl;
    }
    void Speed(int s){
        speed++;
    }
    void SpeedDec(){
        speed--;
    }
    void printStatus(){
        cout << "The Speed of fan is: " << speed << endl;
    }
};
int main(){
    Fan fan1(true);
    fan1.printStatus();
    fan1.ON();
    fan1.printStatus();
    fan1.OFF();
    fan1.printStatus();
    return 0;
}
#include <iostream>
using namespace std;
class Fan
{
  private:
    bool power;

  public:
    Fan()
    {
        power = false;
    }
    Fan(bool bod)
    {
        power = bod;
    }
    ~Fan()
    {
        cout << "Fan object destructed.\n";
    }
    void On()
    {
        power = true;
    }
    void Off()
    {
        power = false;
    }
    void print_status()
    {
        if (power == true)
        {
            cout << "Power is On. ";
        }
        else
        {
            cout << "Power is Off. ";
        }
    }
    bool getStatus(){
    	return power;
	}
};
class S_Fan : public Fan
{
  private:
    int speed;

  public:
    S_Fan()
    {
        speed = 1;
    }
    S_Fan(int s)
    {
        speed = s;
    }
    S_Fan(bool p, int s) : Fan(p)
    {
        speed = s;
    }
    ~S_Fan()
    {
        cout << "S_Fan object Destroyed.\n";
    }
    void speed_Inc()
    {
        if (speed < 3)
            speed++;
    }
    void speed_Dec()
    {
        if (speed > 1)
            speed--;
    }
    void print_speed()
    {
        print_status();
        if (speed == 1)
            cout << "Low Speed.\n";
        else if (speed == 2)
            cout << "Medium Speed.\n";
        else
            cout << "High Speed.\n";
    }
};
class RSFan : public S_Fan {
	private: 
	bool rotate;
	public:
		RSFan(){
			rotate = false;
		}
		RSFan(bool p , int s , bool r) : S_Fan(p, s){
			rotate = r;
		}
		~RSFan(){
			cout << "RSFan is destoryed";
		}
		void rotateOn(){
			rotate = true;
		}
		void rotateOff(){
			rotate = false;
		}
		void printStatus() {
            print_status();
            print_speed();
			cout << endl << "The Status of Rotate is: " << rotate << endl;
		}
};
void FlipPower(Fan& f){
	bool status = f.getStatus();
	if(status == true)
	   f.Off();
	else
	   f.On();
}
void FlipPower(S_Fan& f){
	bool status = f.getStatus();
	if(status == true)
	   f.Off();
	else
	   f.On();
}
void FlipPower(RSFan& f){
	bool status = f.getStatus();
	if(status == true)
	   f.Off();
	else
	   f.On();
}
int main()
{
    // Created Objects for Fan class.
    // F1 OFF, F2 ON, F3 ON
    Fan f1, f2(true), f3(true);
    cout << "Initial state\n";
    cout << "F1: ";
    f1.print_status();
    cout << "F2: ";
    f2.print_status();
    cout << "F3: ";
    f3.print_status();
    cout << endl;
    // F1 ON, F2 ON, F3 off.
    FlipPower(f1);
    FlipPower(f3);
    cout << "\nChanged state.\n";
    // State is changed here
    cout << "F1: ";
    f1.print_status();
    cout << "F2: ";
    f2.print_status();
    cout << "F3: ";
    f3.print_status();
    // Created objects for S_Fan Class.
    // SF1 ON with low speed.
    // SF2 OFF with medium speed.
    // SF3 OFF with low speed.
    S_Fan sf1(true, 1) , sf2(2) , sf3;
    // Printing of initial status
    cout << "\n\nS_Fan initial state\n";
    cout << "SF1: ";
    sf1.print_speed();
    cout << "SF2: ";
    sf2.print_speed();
    cout << "SF3: ";
    sf3.print_speed();
    //sf1 off and low.
    FlipPower(sf1);
    sf1.speed_Dec();
    // sf2 off High
    FlipPower(sf2);
    sf2.speed_Inc();
    sf2.speed_Inc();
    //sf3 Off and medium
    sf3.speed_Inc();
    // Printing new status.
    cout << "\nS_Fan changed status.\n";
    cout << "SF1: ";
    sf1.print_speed();
    cout << "SF2: ";
    sf2.print_speed();
    cout << "SF3: ";
    sf3.print_speed();
    cout << endl;
    
    // Creating Four Objects of RSFan Class
    // RSF1 is on and low speed and no rotation
    RSFan RSF1(true, 1 , false);
    // RSF2 is off and low speed and no rotation
	RSFan RSF2;
	// RSF3 is on and medium speed and with rotation
    RSFan RSF3(true, 2 , true);
    // RSF4 is on and high speed and with rotation
	RSFan RSF4(true, 3 , true);
	// Printing all RSF on screen
	cout << endl << "RSF1: " << endl;
	RSF1.printStatus();
	RSF2.printStatus();
	RSF3.printStatus();
	RSF4.printStatus();
	cout <<endl;
	
	// Changing the The status of RSF1
	FlipPower(RSF1);
	RSF1.rotateOn();
	
	// Changing the speed of RSF2 ONCE
	RSF2.speed_Inc();
	
	// Changing the speed of RSF3 Twice and rotation off
	RSF3.speed_Dec();
	RSF3.speed_Dec();
	RSF3.rotateOff();
	
	// Changing the rotation and power status of RSF4
	RSF4.rotateOff();
	FlipPower(RSF4);
	
	// Printing the status of all after changing	
	cout << endl << "RSF1: " << endl;
	RSF1.printStatus();
	RSF2.printStatus();
	RSF3.printStatus();
	RSF4.printStatus();
	cout <<endl;
	
	
	
    return 0;
}
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
int main()
{
    // Created Objects for Fan class.
    Fan f1, f2, f3;
    // F1 off, others are on.
    f2.On();
    f3.On();
    cout << "Initial state\n";
    cout << "F1: ";
    f1.print_status();
    cout << "F2: ";
    f2.print_status();
    cout << "F3: ";
    f3.print_status();
    cout << endl;
    // F3 is off, others are on.
    f1.On();
    f3.Off();
    cout << "\nChanged state.\n";
    cout << "F1: ";
    f1.print_status();
    cout << "F2: ";
    f2.print_status();
    cout << "F3: ";
    f3.print_status();
    // Created objects for S_Fan Class.
    S_Fan sf1(true, 1);
    S_Fan sf2(false, 2);
    S_Fan sf3(false, 1);
    // Printing of initial status
    cout << "\n\nS_Fan initial state\n";
    cout << "SF1: ";
    sf1.print_speed();
    cout << "SF2: ";
    sf2.print_speed();
    cout << "SF3: ";
    sf3.print_speed();
    //sf1 off and speed decrement.
    sf1.Off();
    sf1.speed_Dec();
    // sf2 off and speed increment
    sf2.Off();
    sf2.speed_Inc();
    sf2.speed_Inc();
    //sf3 increment
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
    return 0;
}
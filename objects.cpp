#include <iostream>
using namespace std;
int main()
{
    class uniClass {
        private: 
        string name;
        int age;
        float height;

        public:
        void setName(string name) {
            cout << "Student Name is: " << name << endl;
        }
        void setAge (int inputage) {
             age = inputage;
             cout << "Student Age is: " << age << endl;
        }
        void setHeight(float inputHeight) {
            height = inputHeight;
            cout << "Student Height is: " << height << " cm" << endl;
        }
    };

    uniClass studentData1 , studentData2;

    // Student No . 1
    studentData1.setName("Ali Arif");
    studentData1.setAge(20);
    studentData1.setHeight(6.2);  
    
      // Student No . 2
      studentData2.setName("Umar Bahsir");
      studentData2.setAge(18);
      studentData2.setHeight(5.10);  
}
#include <iostream>
using namespace std;
int main()
{
    class teacher {
        private: 
         string teacherName;
         string teacherFname;
         int teacherId;
         int teacherSalary;
         public: 
         // Setters Functions
         void setName (string n) 
         {
            teacherName = n;
         }
         void setFname (string n)
         {
            teacherFname = n;
         }
         void setId (int n)
         {
            teacherId = n;
         }
         void setSalary (int n)
         {
            teacherSalary = n;
         }

         // Getters Functions

         string getName()
         {
            return teacherName;
         }
         string getFname()
         {
            return teacherFname;
         }
         int getId()
         {
            return teacherId;
         }
         int getSalary()
         {
            return teacherSalary;
         }
          
        // Input Functions
         void inputData () {
            cout << "Enter the teacher data as the follwing seqence." << endl;
            cout << "Name" << endl << "Father Name" << endl << "ID" << endl << "Salary" << endl;
            cin >> teacherName >> teacherFname >> teacherId >> teacherSalary;
         }

         // Output Function
         void display() {
            cout << "Teacher Name: " << getName() << " Teacher Father Name: " << getFname() << " Teacher ID: " << getId() << " Teacher Salary: " << getSalary() << endl;
         }
    };

    teacher t1,t2,t3;
    t1.setName("Ali");
    t1.setFname("Arif");
    t1.setId(1);
    t1.setSalary(5000);

    t2.setName("Babar");
    t2.setFname("Khan");
    t2.setId(2);
    t2.setSalary(6000);

    t3.inputData();

    t1.display();
    t2.display();
    t3.display();
} 
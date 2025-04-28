#include <iostream>
using namespace std;
class Point{
	protected: 
	int x;
	int y;
	public: 
	Point(){
		x = 0;
		y=0;
	}
	Point(int xIs , int yIs) {
		x = xIs;
		y = yIs;
	}
	~Point(){
	   cout <<  endl << "Destoryed" << endl;
	}
	void setX(int xIs){
		x = xIs;
	}	void setY(int yIs){
		y = yIs;
	}
	int getX(){
	  return x;
	}
	int getY(){
	  return y;
	}
	void input () {
		cout << "The input Line: " << endl;
		cin >> x >> y;
	}
	void display() {
		cout << endl  << x << "," << y << endl;
	}
};

class ThreeDPoint : public Point {
	private:
		int z;
	public: 
	 ThreeDPoint() {
	 	z = 0;
	 }
	 ~ ThreeDPoint() {
	 	cout << endl << "Destoryed" << endl;
	 }
	 void setZ (int f){
	 	z = f;
	 }
	 int getZ () {
	 	return z;
	 }
	void input () {
		cout << "The input Line: " << endl;
		
		cin >> x >> y >> z;
	}
	void display() {
		cout << endl << x << "," << y << "," << z << endl;
	}
};
int main(){
    Point P1 , P2(4,7);
	ThreeDPoint P3;
     P3.input();
     P1.display();
     P2.display();
	 P3.display();
	 P1.setX(3);
	 P1.setY(6);
	 P3.setX(2);
	 P3.setY(7);
	 P3.setZ(5);
     P1.display();
     P2.display();
	 P3.display();
}

// Code by Ali Arif
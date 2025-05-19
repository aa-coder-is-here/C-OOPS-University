#include<iostream>
using namespace std;

class Text {
  public:
    void fn(int a);
    void fn(char a);
    void fn(float a);
  
    void fn(int a, char b);
    void fn(int a, char b, float f);
    void fn(int a, char b, float f, string s);
  
    void fn(char b, int a, float f, string s);
    void fn(float f, int a, char b, string s);
    void fn(string s, float f, int a, char b);
};

// Definitions outside the class
void Text::fn(int a) {
    cout << "Int Version of fn" << endl;
}
void Text::fn(char a) {
    cout << "Character Version of fn" << endl;
}
void Text::fn(float a) {
    cout << "Float Version of fn" << endl;
}
void Text::fn(int a, char b) {
    cout << "Int & Character Version of fn" << endl;
}
void Text::fn(int a, char b, float f) {
    cout << "Int & Character & float Version of fn" << endl;
}
void Text::fn(int a, char b, float f, string s) {
    cout << "Int & Character & Float & String Version of fn" << endl;
}
void Text::fn(char b, int a, float f, string s) {
    cout << "Character & Int & Float & String Version of fn" << endl;
}
void Text::fn(float f, int a, char b, string s) {
    cout << "Float & Int & Character & String Version of fn" << endl;
}
void Text::fn(string s, float f, int a, char b) {
    cout << "String & Float & Int & Character Version of fn" << endl;
}

int main() {
    Text t1;
    t1.fn(2);
    t1.fn(2.6f);
    t1.fn('A');
    t1.fn(2 , 'B');
    t1.fn(2 , 'B' , 2.6f);
    t1.fn(2 , 'B' , 2.6f , "String A");
}

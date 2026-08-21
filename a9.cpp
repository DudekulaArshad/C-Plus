// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int reg_no;
//     int roll_no;
//     string section;

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Reg No: " << reg_no << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Section: " << section << endl;
//     }
// };

// int main() {
//     Student s1;

//     s1.name = "Arshad";
//     s1.reg_no = 12501046;
//     s1.roll_no = 22;
//     s1.section = "A";

//     s1.display();

//     return 0;
// }

//=----------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int reg_no;
//     int roll_no;
//     string section;

//     void setData(string n, int r, int ro, string s) {
//         name = n;
//         reg_no = r;
//         roll_no = ro;
//         section = s;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Reg No: " << reg_no << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Section: " << section << endl;
//     }
// };

// int main() {
//     Student s1;

//     s1.setData("Arshad", 12501046, 22, "A");

//     s1.display();

//     return 0;
// }


// ---------------------------------------------------------------------

#include <iostream>
using namespace std;

class Rectangle {
public:

float length;
float breadth;

void setData(float length, float breadth) {
this->length = length;
this->breadth = breadth;
}

float area() {
return length * breadth;
}

float parameter() {
return 2 * (length + breadth);
}

void display() {
cout << "Length: " << length << endl;
cout << "Breadth: " << breadth << endl;
cout << "Area: " << area() << endl;
cout << "Perimeter: " << parameter() << endl;
}
};

int main() {
Rectangle r1;
r1.setData(10, 5);
r1.display();

return 0;
}
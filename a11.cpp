#include <iostream>
using namespace std;
class Student{
    public:
    string name ;
    int roll_no;
    
    static int count;
    static void increment(){
        count++;
    }


    Student(int r ){
        roll_no = r;
        // count++;
    }
    void display(){
        cout<<count<<endl;
    }

};
int Student :: count = 0 ;

int main(){
    Student s1(45);
    s1.increment();
    s1.display();
    Student s2(35);
    s2.increment();
    s2.display();
    Student s3(46);
    s3.increment();
    s3.display();
    Student s4(65);
    s4.increment();
    s4.display();


}
#include <iostream>
using namespace std;

struct student{
     int roll;
     float mark;
};

int main(){
    student *ptr, s;
    ptr=&s;

   cout << "Enter roll: ";
   cin  >> (*ptr).roll;
   cout << "Enter mark: ";
   cin  >> (*ptr).mark;

   cout << "roll: " << (*ptr).roll << "marks: " << (*ptr).mark;

 return 0;
}
   
     
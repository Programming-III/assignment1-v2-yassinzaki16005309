#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student ::public Person{
private : 
int year;
string major;
public:
Student();
Student(int year , string major);
~student();
void display();
};












#endif

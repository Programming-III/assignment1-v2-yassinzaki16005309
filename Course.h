#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course(){
private:
  string courseCode;
  string courseName;
  int maxStudents;
  Student* students;
  int currentStudents;
  public:
  Course();
  Course(string courseCode , string coursName , int maxStudents , Student* students , int currentStudents);
   ~Course();
     void addStudent(const Student& s);
  
};













#endif

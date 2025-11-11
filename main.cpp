#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person(){
this -> name = "";
this -> id = 0;   
}
Person(string name , int id){
this -> name = name;
   this -> id = id;
}
~Person(){}
void display(){
cout << "name: " << name << "" << "id: " << id ;
}







// ==================== Student Class Implementation ====================
Student(){
   this -> yearLevel = 0;
   this -> major = "";
}
Student(int yearLevel , string major){
   this -> yearLevel = yearLevel;
   this -> major = major;
}
~Student(){}
void display(){
   cout << "yearLevel: " << yearLevel << "" << "major: " << major;
}






// ==================== Instructor Class Implementation ====================
Instructor(){
   this -> department = "";
   this -> experienceYears = 0;
}
Instructor(string department , int experienceYears){
   this -> department = department ;
   this -> experienceYears = experienceYears;
}
~Instructor(){}
void display(){
   cout << "department: " << dpartment << "" << "experienceYears: " << experienceYears << ;
}








// ==================== Course Class Implementation ====================
Course(){
   this -> courseCode = "";
   this -> courseName = "";
   this -> maxStudents = 0;
   this -> students = [];
   this -> currentStudents = 0;
}
Course(string courseCode , string courseName , int maxStudents , Student* students , int currentStudents){
  this -> courseCode = courseCode;
   this -> courseName = courseName;
   this -> maxStudents = maxStudents;
   this -> students = students;
   this -> currentStudents = currentStudents; 
}
~Course(){}
void addStudent(const Student& s){
   int arr[];
   for(int i = 0 ; i < arr.length() ; i++){
   arr[i] = students[i];
      arr[arr.length()] = s;
      students[students.length()] = arr[arr.length()];
   }
   
}
void displayCourseInfo(){
   cout << "courseCode: " << courseCode << "" << "courseName: " << courseName << "" << "maxStudents: " << maxStudents << "" << "students: " << students << "" << "currentStudents: " << currentStudents;
}

delete arr[];





// ==================== Main Function ====================
int main() {
   Student s1(2,"informatics");
   Instructor i1("computer science" , 5);
   Course c1("Course: CS101 " , "Introduction to programming" , 3 , [] , 0 );
   c1.addCourse("omar");
   c1.display();
   i1.display();
   s1.display();
    
    return 0;
}

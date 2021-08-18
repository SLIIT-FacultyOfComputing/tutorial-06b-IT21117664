#include "Student.h"
#include <iostream>
#include "string.h"

using namespace std;

// Assign studentId and name
void Student::assignDetails(int pid, char pname[]) {
  studentId = pid;
  strcpy(name, pname);
}

// Display StudentId and Name
void Student::display() {
  cout << "student id : " << studentId << endl;
  cout << "student name : " << name << endl;
  
}

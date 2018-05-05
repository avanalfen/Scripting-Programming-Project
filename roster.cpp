/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.cpp
 * Author: austinvanalfen
 * 
 * Created on May 1, 2018, 6:39 PM
 */

#include "student.h"
#include "roster.h"
#include <iostream>
#include <array>
#include <stdio.h>
#include <string.h>
#include "networkStudent.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include <numeric>
#include <algorithm>

// print in the following format: 1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab] daysInCourse: {35, 40, 55} [tab] Degree Program: Security.
// The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
void Roster::printAll() {
    
    for(int i = 0; i < classRosterArray.size(); i++) {
        
        Student student = classRosterArray.at(i);

        string studentID = student.getStudentID();
        string firstName = student.getFirstName();
        string lastName = student.getLastName();
        int age = student.getAge();
        std::vector<int> daysInCourses = student.getDaysInCourses();
        Degree studentDegree = student.getDegreeProgram();
        string stringDegree;

        if (studentDegree == NETWORK) {
            stringDegree = "Network";
        } else if (studentDegree == SOFTWARE) {
            stringDegree = "Software";
        } else if (studentDegree == SECURITY) {
            stringDegree = "Security";
        }
        
        printf("%s "
                "\t First name: %s "
                "\t Last name: %s "
                "\t Age: %d "
                "\t daysInCourse: {%d, %d, %d} "
                "\t Degree Program: %s"
                "\n\n", 
                studentID.c_str(), 
                firstName.c_str(), 
                lastName.c_str(), 
                age, 
                daysInCourses.at(0), 
                daysInCourses.at(1), 
                daysInCourses.at(2),
                stringDegree.c_str());
    }
    
}

//that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
void Roster::printDaysInCourse(string studentID) {
    for(int i = 0; i < classRosterArray.size(); i++) {
        
        Student student = classRosterArray.at(i);
        std::vector<int> days = student.getDaysInCourses();

        if (student.getStudentID() == studentID) {
            float average = accumulate( days.begin(), days.end(), 0.0)/days.size(); 
            cout << average << endl;
        }
    }
}

//verifies student email addresses and displays all invalid email addresses to the user
//Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails() {
    for(int i = 0; i < classRosterArray.size(); i++) {
        
        Student student = classRosterArray.at(i);
        string email = student.getEmailAddress();
        
        int spacesNumber = email.find(" ", 0);
        
        if (spacesNumber > 0) {
            cout << email << endl;
        }
    }
}

//prints out student information for a degree program specified by an enumerated type
void Roster::printByDegreeProgram(int degreeProgram) {
    
}

void Roster::addStudentToRoster(Student student) {
    this->classRosterArray.push_back(student);
}

//sets the instance variables from part D1 and updates the roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
    if (degree == NETWORK) {
        int daysInCourses[] = {daysInCourse1, daysInCourse2, daysInCourse3};
        std::vector<int> vectorDaysInCourses (daysInCourses, daysInCourses + sizeof(daysInCourses) / sizeof(int));
        NetworkStudent newStudent = NetworkStudent(studentID, firstName, lastName, emailAddress, age, vectorDaysInCourses, degree);
        this->addStudentToRoster(newStudent);
        
    } else if (degree == SOFTWARE) {
        int daysInCourses[] = {daysInCourse1, daysInCourse2, daysInCourse3};
        std::vector<int> vectorDaysInCourses (daysInCourses, daysInCourses + sizeof(daysInCourses) / sizeof(int));
        SoftwareStudent newStudent = SoftwareStudent(studentID, firstName, lastName, emailAddress, age, vectorDaysInCourses, degree);
        this->addStudentToRoster(newStudent);
        
    } else if (degree == SECURITY) {
        int daysInCourses[] = {daysInCourse1, daysInCourse2, daysInCourse3};
        std::vector<int> vectorDaysInCourses (daysInCourses, daysInCourses + sizeof(daysInCourses) / sizeof(int));
        SecurityStudent newStudent = SecurityStudent(studentID, firstName, lastName, emailAddress, age, vectorDaysInCourses, degree);
        this->addStudentToRoster(newStudent);
        
    } else {
        cout << "Error with degree with student" << endl;
    }
}

//removes students from the roster by student ID. If the student ID does not exist, 
//the function prints an error message indicating that the student was not found.
void Roster::remove(string studentID) {
    bool removedItem = false;
    for (int i = 0; i < this->classRosterArray.size(); i++) {
        if (this->classRosterArray[i].getStudentID() == studentID) {
            this->classRosterArray.erase(this->classRosterArray.begin() + (i - 1));
            removedItem = true;
        }
    }
    if (removedItem == false) {
        cout << "a student with this ID was not found." << endl;
    }
}

int main(int argc, char** argv) {
    
    // F.1
    cout << "Course Title: Scripting and Programming Applications\n" << "Language: C++\n" << "Student ID: #000567731\n" << "Name: Austin Van Alfen" << "\n" << endl;
    
    Roster studentRoster;
    
    const string studentData[] =
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Austin,VanAlfen,austin.van.alfen@gmail.com,25,7,8,4,SOFTWARE"};
    
    int sizeOfStudentArray = (sizeof(studentData) / sizeof(studentData[0]));
    
    // add each student to the roster here.
    if (sizeOfStudentArray > 0) {
        
        for (int i = 0; i < sizeOfStudentArray; i++) {
            string student = studentData[i];
            
            int studentLength = student.length();
            
            char newStudent[studentLength + 1];
            
            strcpy(newStudent, student.c_str());
            
            char * parts;
            
            parts = strtok(newStudent, ",");
            
            string id;
            string firstName;
            string lastName;
            string email;
            int age;
            int daysForFirstClass;
            int daysForSecondClass;
            int daysForThirdClass;
            Degree degree;
            
            int r = 0;
            
            while (parts != NULL && r < 9) {
                
                if (r == 0) {
                    id = parts;
                } else if (r == 1) {
                    firstName = parts;
                } else if (r == 2) {
                    lastName = parts;
                } else if (r == 3) {
                    email = parts;
                } else if (r == 4) {
                    std::string::size_type ageSize;
                    age = std::stoi (parts,&ageSize);
                } else if (r == 5) {
                    std::string::size_type daysOneSize;
                    daysForFirstClass = std::stoi (parts,&daysOneSize);
                } else if (r == 6) {
                    std::string::size_type daysTwoSize;
                    daysForSecondClass = std::stoi (parts,&daysTwoSize);
                } else if (r == 7) {
                    std::string::size_type daysThreeSize;
                    daysForThirdClass = std::stoi (parts,&daysThreeSize);
                } else if (r == 8) {
                    string stringDegree = parts;
                    if (stringDegree == "SOFTWARE") {
                        degree = SOFTWARE;
                    } else if (stringDegree == "SECURITY") {
                        degree = SECURITY;
                    } else if (stringDegree == "NETWORK") {
                        degree = NETWORK;
                    }
                }
                
                parts = strtok (NULL, ",");
                r++;
            }
            
            studentRoster.add(id, firstName, lastName, email, age, daysForFirstClass, daysForSecondClass, daysForThirdClass, degree);
             
        }
        
        studentRoster.printAll();
        studentRoster.printInvalidEmails();
    }
    
    
    // then follow these steps.
    /*
        classRoster.printAll();
        classRoster.printInvalidEmails();
        //loop through classRosterArray and for each element:
        classRoster.printAverageDaysInCourse(current_object's student id);
        classRoster.printByDegreeProgram(SOFTWARE);
        classRoster.remove("A3");
        classRoster.remove("A3");
     */
    return 0;
}
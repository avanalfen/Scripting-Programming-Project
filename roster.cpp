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

void Roster::addStudentToRoster(Student student) {
    this->classRosterArray.push_back(&student);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
    if (degree == NETWORKING) {
        
    } else if (degree == SOFTWARE) {
        
    } else if (degree == SECURITY) {
        
    } else {
        cout << "Error with degree with student" << endl;
    }
}

void Roster::remove(string studentID) {
    bool removedItem = false;
    for (int i = 0; i < this->classRosterArray.size(); i++) {
        if (this->classRosterArray[i]->getStudentID() == studentID) {
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
    cout << "Course Title: Scripting and Programming Applications\n" << "Language: C++\n" << "Student ID: #000567731\n" << "My name: Austin Van Alfen" << endl;
    
    Roster studentRoster;
    
    const string studentData[] =
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Austin,VanAlfen,austin.van.alfen@gmail.com,25,7,8,4,SOFTWARE"};
    
    // add each student to the roster here.
    
    
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
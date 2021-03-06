/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.h
 * Author: austinvanalfen
 *
 * Created on May 1, 2018, 6:39 PM
 */

#include "student.h"
#include <iostream>

#ifndef ROSTER_H
#define ROSTER_H

class Roster {
    
private:
    vector<Student*> classRosterArray;
    
public:
    Roster() {
        
    }
    ~Roster() {
        cout << "Roster is gone." << endl;
    }
    
    void printAll();
    void printDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(int degreeProgram);
    void addStudentToRoster(Student* student);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
    void remove(string studentID);
    void print(Student student);
    vector<Student*> getRoster();
    
    
};

#endif /* ROSTER_H */

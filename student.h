/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: austinvanalfen
 *
 * Created on May 1, 2018, 6:38 PM
 */

#include "degree.h"
#include <vector>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    
private:
    string      studentID;
    string      firstName;
    string      lastName;
    string      emailAddress;
    int         age;
    Degree      degree;
    std::vector<int> daysToComplete;
    

public:
    
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, std::vector<int> daysToComplete, Degree degree) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        this->daysToComplete = daysToComplete;
    }
    
    ~Student() {
        
    }
    
    string  getStudentID();
    void    setStudentID(int studentID);
    
    string  getFirstName();
    void    setFirstName(string firstName);
    
    string  getLastName();
    void    setLastName(string lastName);
    
    string  getEmailAddress();
    void    setEmailAddress(string emailAddress);
    
    int     getAge();
    void    setAge(int age);
    
    std::vector<int> getDaysInCourses();
    void setDaysInCourses();
    
    virtual string print();
    
    virtual Degree getDegreeProgram();
    
}; 

#endif /* STUDENT_H */

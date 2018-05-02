/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.cpp
 * Author: austinvanalfen
 * 
 * Created on May 1, 2018, 6:38 PM
 */

#include "degree.h"
#include <vector>
#include <string>
using namespace std;

#include "student.h"


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
    }
    
    ~Student() {
        this->studentID = NULL;
    }
    
    string  getStudentID() {
        return this->studentID;
    }
    void    setStudentID(int studentID) {
        this->studentID = studentID;
    }
    
    string  getFirstName() {
        return this->firstName;
    }
    void    setFirstName(string firstName) {
        this->firstName = firstName;
    }
    
    string  getLastName() {
        return this->lastName;
    }
    void    setLastName(string lastName) {
        this->lastName = lastName;
    }
    
    string  getEmailAddress() {
        return this->emailAddress;
    }
    void    setEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress;
    }
    
    int     getAge() {
        return this->age;
    }
    void    setAge(int age) {
        this->age = age;
    }
    
    virtual string print();
    
    virtual Degree getDegreeProgram();
    
}; 

string Student::print() {
    
}

Degree Student::getDegreeProgram() {
    
}
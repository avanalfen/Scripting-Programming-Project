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


string Student::getStudentID() {
        return this->studentID;
    }

void Student::setStudentID(int studentID) {
        this->studentID = studentID;
    }

string Student::getFirstName() {
        return this->firstName;
    }

void Student::setFirstName(string firstName) {
        this->firstName = firstName;
    }

string Student::getLastName() {
        return this->lastName;
    }

void Student::setLastName(string lastName) {
        this->lastName = lastName;
    }

string Student::getEmailAddress() {
        return this->emailAddress;
    }

void Student::setEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress;
    }

int Student::getAge() {
        return this->age;
    }

void Student::setAge(int age) {
        this->age = age;
    }

string Student::print() {
    
}

Degree Student::getDegreeProgram() {
    
}
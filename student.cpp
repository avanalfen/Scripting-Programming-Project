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

#include <iostream>
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

void Student::print() {
    string studentID = this->getStudentID();
    string firstName = this->getFirstName();
    string lastName = this->getLastName();
    int age = this->getAge();
    std::vector<int> daysInCourses = this->getDaysInCourses();
    Degree studentDegree = this->getDegreeProgram();
    string stringDegree;

    if (studentDegree == NETWORKING) {
        stringDegree = "Network";
    } else if (studentDegree == SOFTWARE) {
        stringDegree = "Software";
    } else if (studentDegree == SECURITY) {
        stringDegree = "Security";
    }

    printf("\n%s "
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

std::vector<int> Student::getDaysInCourses() {
    return this->daysToComplete;
}

Degree Student::getDegreeProgram() {
    return this->degree;
}
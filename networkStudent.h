/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   networkStudent.h
 * Author: austinvanalfen
 *
 * Created on May 1, 2018, 6:38 PM
 */

#include"student.h"
#include <iostream>

#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent:public Student {
    
    private:
        Degree degree;
        
    public:
        NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, std::vector<int> daysToComplete, Degree degree) : 
        Student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degree) {
            this->degree = degree;
        }
        
        Degree getDegreeProgram(); 
    
};

#endif /* NETWORKSTUDENT_H */

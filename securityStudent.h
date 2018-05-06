/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   securityStudent.h
 * Author: austinvanalfen
 *
 * Created on May 1, 2018, 6:38 PM
 */

#include"student.h"

#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class SecurityStudent:public Student {
    
    private:
        Degree degree;
        
    public:
        SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, std::vector<int> daysToComplete, Degree degree) : 
        Student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degree) {
            this->degree = degree;
        }
        
        Degree getDegreeProgram(); 
    
};

#endif /* SECURITYSTUDENT_H */

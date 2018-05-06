/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   softwareStudent.h
 * Author: austinvanalfen
 *
 * Created on May 1, 2018, 6:39 PM
 */

#include "student.h"
#include "degree.h"

#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class SoftwareStudent:public Student {
    
    private:
        Degree degree;
    
    public:
        SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, std::vector<int> daysToComplete, Degree degree) : 
        Student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degree) {
            this->degree = degree;
        }
        
        Degree getDegreeProgram(); 
    
};

#endif /* SOFTWARESTUDENT_H */

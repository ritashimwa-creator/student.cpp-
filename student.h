#ifndef STUDENT_H
#define STUDENT_H


#include<iostream>
#include<string>

using namespace std;
struct student
{
    int id;
    string name;
    int age;
    string course;
};

void swapNumbers(int*a,int *b);
void addStudent();
void displayStudents();
void searchStudent(); 
void updateStudents();
void deleteStudents();

#endif




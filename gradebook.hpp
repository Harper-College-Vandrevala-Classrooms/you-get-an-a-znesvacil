#pragma once
#ifndef gradebook_hpp
#define gradebook_hpp
#endif

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Gradebook
{
private:
    vector<string> student_name;
    vector<string> student_id;
    
    vector<string> assignment_name;
    vector<int> total_points;
    
    map<string, map <string, string> > assignment_student_grades;
    
public:
    void add_student(string student_name_, string student_id_);
    void add_assignment(string assignment_name_, int total_points_);
    void add_grade(string student_name_, string assignment_name_, string grade);
    void print();
};


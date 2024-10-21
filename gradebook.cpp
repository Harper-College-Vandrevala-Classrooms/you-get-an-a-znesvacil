#include "gradebook.hpp"

void Gradebook::add_student(string student_name_, string student_id_) {
    student_name.push_back(student_name_);
    student_id.push_back(student_id_);
}

void Gradebook::add_assignment(string assignment_name_, int total_points_) {
    assignment_name.push_back(assignment_name_);
    total_points.push_back(total_points_);
}

void Gradebook::add_grade(string student_name_, string assignment_name_, string grade) {
    for (int i = 0; i < student_name.size(); i++)
    {
        if (student_name_ == student_name[i]) {
            for (int j = 0; j < assignment_name.size(); j++)
            {
                if (assignment_name_ == assignment_name[j]) {
                    assignment_student_grades[student_name_][assignment_name_] = grade;
                }
            }
        }
    }
}

void Gradebook::print() {
    for (int i = 0; i < student_name.size(); i++)
    {
        cout << student_name[i] << ", " << student_id[i];
        for (int j = 0; j < assignment_name.size(); j++)
        {
            if (assignment_student_grades[student_name[i]][assignment_name[j]] == "") {
                cout << ", " << assignment_name[j] << ": Not submitted";
            }
            else {
                cout << ", " << assignment_name[j] << ": " << assignment_student_grades[student_name[i]][assignment_name[j]] << "/" << total_points[j];
            }
        }
        cout << endl;
    }
}

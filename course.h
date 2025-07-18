#ifndef COURSE_H
#define COURSE_H

#include "student.h"

typedef struct course {
    char course_name[50];
    double avg_grade;
    int numofStudents;
    Student* enrolled_student;
} Course;

void create_course(Course* crs);
void passed_students(Course* course);
int is_student_incourse(int id, Course* course);

#endif

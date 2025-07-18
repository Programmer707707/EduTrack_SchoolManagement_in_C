#ifndef SCHOOL_H
#define SCHOOL_H

#include "course.h"

typedef struct school {
    char school_name[50];
    Course* courses;
    int numofCourses;
} School;

void create_school(School* school);
int is_student_inschool(int id, School* school);
void print_student_courses(int id, School* school);

#endif

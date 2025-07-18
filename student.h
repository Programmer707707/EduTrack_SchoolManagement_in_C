#ifndef STUDENT_H
#define STUDENT_H

typedef struct student {
    int id;
    char student_name[50];
    double avg_grade;
} Student;

void create_student(Student* st);

#endif

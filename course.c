#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "student.h"

void create_course(Course* crs) {
    printf("Enter number of students: ");
    scanf("%d", &crs->numofStudents);
    crs->enrolled_student = malloc(sizeof(Student) * crs->numofStudents);
    for(int i = 0; i < crs->numofStudents; i++) {
        create_student(&crs->enrolled_student[i]);
    }
    printf("Enter course name: ");
    scanf("%s", crs->course_name);
    printf("Enter course average grade: ");
    scanf("%lf", &crs->avg_grade);
}

int is_student_incourse(int id, Course* course) {
    for(int i = 0; i < course->numofStudents; i++) {
        if(course->enrolled_student[i].id == id) {
            return 1;
        }
    }
    return 0;
}

void passed_students(Course* course) {
    printf("Students who passed %s:\n", course->course_name);
    for(int i = 0; i < course->numofStudents; i++) {
        if(course->enrolled_student[i].avg_grade > course->avg_grade) {
            printf("ID: %d | Name: %s | Grade: %.2lf\n",
                   course->enrolled_student[i].id,
                   course->enrolled_student[i].student_name,
                   course->enrolled_student[i].avg_grade);
        }
    }
}

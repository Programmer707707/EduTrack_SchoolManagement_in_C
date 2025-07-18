#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "school.h"

void create_school(School* school) {
    printf("Enter number of courses: ");
    scanf("%d", &school->numofCourses);
    school->courses = malloc(sizeof(Course) * school->numofCourses);
    for(int i = 0; i < school->numofCourses; i++) {
        create_course(&school->courses[i]);
    }
    printf("Enter school name: ");
    scanf("%49s", school->school_name);
}

int is_student_inschool(int id, School* school) {
    for(int i = 0; i < school->numofCourses; i++) {
        if(is_student_incourse(id, &school->courses[i])) {
            return 1;
        }
    }
    return 0;
}

void print_student_courses(int id, School* school) {
    for(int i = 0; i < school->numofCourses; i++) {
        if(is_student_incourse(id, &school->courses[i])) {
            printf("%s\n", school->courses[i].course_name);
        }
    }
}

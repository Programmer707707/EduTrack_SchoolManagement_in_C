#include <stdio.h>
#include <stdlib.h>
#include "school.h"
#include "course.h"

int main() {
    Course course;
    create_course(&course);

    School school;
    create_school(&school);

    int id = 1;
    printf("Student in course: %d\n", is_student_incourse(id, &course));
    printf("Student in school: %d\n", is_student_inschool(id, &school));

    print_student_courses(id, &school);
    passed_students(&course);

    free(course.enrolled_student);
    for(int i = 0; i < school.numofCourses; i++) {
        free(school.courses[i].enrolled_student);
    }
    free(school.courses);
    return 0;
}

#include <stdio.h>
#include "student.h"

void create_student(Student* st) {
    printf("Enter student id: ");
    scanf("%d", &st->id);
    printf("Enter student name: ");
    scanf("%49s", st->student_name);
    printf("Enter student grade: ");
    scanf("%lf", &st->avg_grade);
}

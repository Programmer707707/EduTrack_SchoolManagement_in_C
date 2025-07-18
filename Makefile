all: main

main: main.o student.o course.o school.o
	gcc -o main main.o student.o course.o school.o

main.o: main.c student.h course.h school.h
	gcc -c main.c

student.o: student.c student.h
	gcc -c student.c

course.o: course.c course.h student.h
	gcc -c course.c

school.o: school.c school.h course.h
	gcc -c school.c

clean:
	rm -f *.o main

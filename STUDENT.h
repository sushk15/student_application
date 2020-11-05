#include <stdio.h>
#include <stdint.h>
#include "appconst.h"
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

struct _student_ {
    char  name [STUDENT_NAME_LEN];
    int32_t regnumber;
    char program[PROGRAM_NAME_LEN];
    char email[EMAIL_LEN];
};

typedef struct _student_ Student;

struct _program_{
    int8_t big_data_seats;
    int8_t machine_learning_seats;
    int8_t embedded_system_seats;

    int8_t filled_bda_seats;
    int8_t filled_ml_seats;
    int8_t filled_es_seats;

};
int main(void)
{
   int i;
    if(test_program_seats())
    {
        printf(" %d ", rand());
    return 0;
    }

    else if (pg.filled_bda_seats() <= 30;)
    {
        print("Print the current student seat is being withdrawn", str(big_data_seats));
    }
}

typedef struct _program_ Program;

Program program_seats(int8_t bda, int8_t ml, int8_t es);
Student student_new(char name[], char prg[], char email[]);
int32_t test_admission_status1(Student s1);
int8_t  filled_seats(Program pg, char branch[]);

#endif // STUDENT_H_INCLUDED

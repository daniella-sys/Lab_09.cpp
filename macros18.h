#ifndef MACROS18_H
#define MACROS18_H

#define SQR(x)    ((x)*(x))                 // квадрат числа
#define CUBE(x)   ((x)*(x)*(x))             // куб числа
#define MAX(a,b)  (((a)>(b))?(a):(b))       // максимум з двох чисел
#define MIN(a,b)  (((a)<(b))?(a):(b))       // мінімум з двох чисел
#define ABS(x)    (((x)<0)?-(x):(x))        // модуль числа

// виведення назви виразу та його значення
#define PRINTR(w) puts("result:"); \
                  printf(#w "=%f\n",(float)(w))
                                            // '\' - продовження макроса,
                                            // '#' - перетворення аргумента в рядок
#endif

//Write a program that changes the default properties of newly created posix threads.(ex: to
//change default pthread stack size )

#include <pthread.h> 

pthread_attr_t tattr;
pthread_t tid;
void *start_routine;
void arg
int ret;

/* default attributes */
ret = pthread_attr_init(&tattr);

/*  default value */
ret = pthread_attr_*(&tattr,SOME_ATRIBUTE_VALUE_PARAMETER);

/* create thread */
ret = pthread_create(&tid, &tattr, start_routine, arg);

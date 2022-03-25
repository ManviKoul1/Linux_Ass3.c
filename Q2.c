//2.Write a program where thread cancel itself.(use pthread_cancel()).

#include<pthread.h> 
#include<stdio.h>

 void *print(void *threadid)
{
printf("\nPrints thread\n");
while(1);
}
int main()
{
pthread_t thread;
int rc,t=0;
printf("Now we are creating thread \n");
rc = pthread_create(&thread,NULL,print,NULL);
printf("\n The thread ID is :- %u", thread);
sleep(6);
t = pthread_cancel(pthread_self);
if(t==0)
{
printf("\n Now thread is cancelled\n");
}
printf("UPDATED\n");  
printf("\nThread ID IS :- %u\n",thread);
}

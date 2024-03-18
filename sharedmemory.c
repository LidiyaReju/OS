#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
void main(){
key_t m;
m=ftok(".",'s');
printf("%d\n",m);
int v=shmget(m,2534,IPC_CREAT|0666);
printf("%d\n",v);
void  *key=shmat(v,NULL,0);
char data[30];
printf("Enter a data:\n");
scanf("%s",data);
strcpy(key,data);
printf("%s\n",(char*)key);
int sm;
sm=shmdt(key);
if(sm==0){
printf("Succesfully Detached");
}
int cd=shmctl(v,IPC_RMID,NULL);
if(cd==0){

printf("Succesfully Removed");

}
}

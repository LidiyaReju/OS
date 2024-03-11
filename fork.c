#include<stdio.h>
#include<unistd.h>
void main(){
 int pd;
 pd=fork();
 if (pd==0){
 printf("The child process \nThe Process ID is %d\nParent ID is %d",getpid(),getppid());
 int num,i;
 printf("Enter limit\n");
 scanf("%d",&num);
 for(i=0;i<=num;i++){
 printf("%d\t",i);
 }}
 else if(pd>0){
 wait();
 printf("This is parent Process ID %d\n",getpid());
 int num;
 printf("Enter a number\n");
 scanf("%d",&num);
 if(num%2==0)
 {
 printf("%d is even",num);
 }
 else {
 printf("%d is odd",num);
 }
 }
 else{
 printf("fork failed");
 
 
 }
 }

#include<stdio.h>

struct info{
int roll;
char name[50];
float CGPA;
};

void display(struct info *p){
printf("Roll number = %d\nName = %s\nCGPA = %f",(*p).roll,(*p).name,(*p).CGPA);
}

int main(){

struct info a;
printf("Enter roll number: \n");
scanf("%d",&a.roll);
printf("Enter name: \n");
scanf("%s",&a.name[0]);
printf("Enter CGPA: \n");
scanf("%f",&a.CGPA);

display(&a);
return 0;
}

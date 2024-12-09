#include<stdio.h>
#include<string.h>
struct Student{
char name[100];
int id;
int age;
};
int main(){
struct Student st1;
strcpy(st1.name,"Steeve");
st1.id = 135;
st1.age = 21;
printf("Student Details\n");
printf("Name: %s\n",st1.name);
printf("ID: %d\n",st1.id);
printf("Age: %d\n",st1.age);
return 0;
}


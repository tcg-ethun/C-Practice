#include<stdio.h>
#include<string.h>

struct  student {
    int roll ;
    char name[100];
    float gpa;
};

int main()
{
   struct student s;
   s.roll = 50;
   strcpy(s.name,"Ethun");
   s.gpa = 5.67;

      printf("Name is : %s \t",s.name);
      printf("Roll is : %d \t",s.roll);
      printf("Ggpa is : %f",s.gpa);
}


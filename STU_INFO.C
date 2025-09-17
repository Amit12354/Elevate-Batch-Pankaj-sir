#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float fees;
    char DOB[80];
};
int main()
{
    struct student stud1;
    printf("\n Enter the roll_no: ");
    scanf("%d",&stud1.roll_no);
    printf("\n Enter the name: ");
    scanf("%s",stud1.name);
    printf("\n Enter the fees: ");
    scanf("%f",&stud1.fees);
    printf("\n Enter the DOB: ");
    scanf("%s",stud1.DOB);
    printf("\n ********STUDENT'S DETAIL***********");
    printf("\n ROLL NO. = %d",stud1.roll_no);
    printf("\n NAME = %s",stud1.name);
    printf("\n FEES = %f",stud1.fees);
    printf("\n DOB = %s",stud1.DOB);
}
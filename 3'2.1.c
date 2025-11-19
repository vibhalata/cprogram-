# include<stdio.h>
int main(){
int rollno;
char name[50];
int marks1;
int marks2;
int marks3;
int total;
float percentage;
char division[20];
printf("enter the Roll no:");
scanf("%d",&rollno);
printf("enter name:");
scanf("%c",& name);
printf("enter the marks in subject 1:");
scanf("%d",& marks1);
printf("enter the marks in subject 2:");
scanf("%d",& marks2);
printf("enter the marks in subject 3:");
scanf("%d",& marks3);
total= marks1 + marks2 + marks3 ;
percentage=( total / 3.0);
if (percentage>=60){
    strcpy(division,"first Division");}
else if (percentage>=50){
    strcpy(division," second Division");}
else if (division>=40){
    strcpy(division,"third Division");}


{else}
    strcpy(division,"fail");
    printf("\n student report:\n");
    printf("Roll no : %d\n",rollno);
    printf("name: %c\n",name);
    printf("total marks :%d\n",total);
    printf("percentage:%f\n",percentage);
    printf("Division:%d\n",division);

return 0;

}

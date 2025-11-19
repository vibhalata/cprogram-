#include<stdio.h>
int main(){
int n,r=0,t,temp;
printf("enter a number:");
scanf("%d",&n);
temp=n;
while (n!=0){
    t=n%10;
    r=r*10+t;
    n=n/10;

}

if (temp==r){
    printf("both condition is same");
    printf("%d",r);
}else{
    printf("both condition is not same");
    printf("%d",r);
}

}

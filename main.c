#include <stdio.h>


int main(){

int pain1,pain2,pain3;


	printf("Hello My Friends ! I'am a Triangle Calculator ! \n My Creator : https://github.com/wolfnatural \n \n Contact : harunaydmrtr@outlook.com \n \n");
	printf("Please Enter The Desired First Pain :");
	scanf("%d",&pain1);
	printf("Please Enter The Desired Second Pain :");
	scanf("%d",&pain2);
	printf("Please Enter The Desired Third Pain :");
	scanf("%d",&pain3);

if(pain1+pain2+pain3 != 180 || pain1 == 0 || pain2 == 0 || pain3 == 0){
    printf("\n \n THIS IS NOT TRİANGLE ! PLEASE TRY AGAIN...\n \n");
}
else if(pain1 == pain2 && pain1 == pain3 && pain2 == pain3 && pain1+pain2+pain3==180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
	printf("\n \n This Is Equilateral Triangle ! \n \n");
}
else if(pain1 == 90 || pain2 == 90 || pain3 == 90 && pain1==pain2 || pain1==pain3 || pain2==pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Right And Isosceles Triangle ! \n \n");
}
else if(pain1 == 90 || pain2 == 90 || pain3 == 90 && pain1 != pain2 && pain1 != pain3 && pain2 != pain3 && pain1+pain2+pain3 == 180 && pain1 !=0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Right And Scalene Triangle ! \n \n ");
}
else if(pain1 < 90 && pain2 < 90 && pain3 < 90 && pain1==pain2 || pain2==pain3 || pain1==pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Acute And Isosceles Triangle !");
}
else if(pain1 < 90 && pain2 < 90 && pain3 < 90 && pain1 != pain2 && pain2 != pain3 && pain1 != pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Acute And Scalene Triangle ! \n \n");
}
else if(pain1 == pain2 || pain1 == pain3 || pain1 == pain3 && pain1 > 90 || pain2 > 90 || pain3 > 90 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Isosceles And Obtuse Triangle ! \n \n ");
}
else if(pain1 > 90 || pain2 > 90 || pain3 > 90 && pain1 != pain2 && pain1 != pain3 && pain2 != pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0 ){
    printf("\n \n This Is Obtuse And Scalene Triangle ! ");
}
else if(pain1 == 90 || pain2 == 90 || pain3 == 90 && pain1+pain2+pain3 ==180 && pain1 !=0 && pain2 != 0 && pain3 != 0){
    printf(" \n \n This Is Right Triangle ! \n \n ");
}

else if(pain1==pain2 || pain1==pain3 || pain2==pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Isosceles Triangle ! \n \n");
}
else if(pain1 != pain2 && pain2 != pain3 && pain1 != pain3 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Scalene Triangle ! \n \n");
}
else if(pain1 < 90 && pain2 < 90 && pain3 < 90 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Acute Triangle ! \n \n ");
}
else if(pain1 > 90 || pain2 > 90 || pain3 > 90 && pain1+pain2+pain3 == 180 && pain1 != 0 && pain2 != 0 && pain3 != 0){
    printf("\n \n This Is Obtuse Triangle ! \n \n ");
}
else{
    printf("THIS IS NOT TRIANGLE PLEASE TRY AGAIN...");
}
return 0;
}

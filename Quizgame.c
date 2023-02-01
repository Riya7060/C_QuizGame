#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void quiz1();
void quiz2();
void quiz3();
int main()
{
	int ch,n;
	printf("\t************************************************\n");
    printf("\t|                                                |\n");     	                                                                 
	printf("\t*********** Welcome To Quiz Contest ************\n");
	printf("\t|                                                |\n");     	                                                                 
	printf("\t************************************************\n");
	printf("How many times you want to play\n");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("Enter the option according to Question\n");
		printf("1.\t Quiz on c language:\n");
		printf("2.\t Quiz on movies\n:");
		printf("3.\t Quiz on python\n:");
		
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:quiz1();
			       break;
			case 2:quiz2();
			        break;
			case 3:quiz3();
			        break;
			  default:printf("Sorry wrong option \n");
                      break; 
		}
		n--;
	}
	return 0;
}
void quiz1()

{
	int option[3];
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	printf("---->THE QUIZ CONSIST OF 3 QUESTION--->\n");
	printf("**********ENTER THE CORRECT OPTION OF EACH QUESTION************\n");
	
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	printf("QUESTION 1.\n what data type we use in C for the integer :\n");
	printf("1.int 2.char 3.float 4.double\n");
	scanf("%d",&option[0]);
	if(option[0]==1)
	  printf("Correct!!!!!!!\n");
	else
	  printf("Sorry incorrect answer\n");
	  
	  
	 printf("QUESTION 2.\n what data type we use in C for the decimal value :\n");
	printf("1.int 2.char 3.float 4.double\n");
	scanf("%d",&option[1]);
	if(option[1]==3)
	  printf("Correct!!!!!!!\n");
	else
	  printf("Sorry incorrect answer\n"); 
	  
	  
	  printf("QUESTION 3.\n what data type we use in C for the character :\n");
	printf("1.int 2.char 3.float 4.double\n");
	scanf("%d",&option[2]);
	if(option[2]==2)
	  printf("Correct!!!!!!!\n");
	else
	  printf("Sorry incorrect answer\n");
}
void quiz2()
{
	int option[3];
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("QUESTION 1.\n which movie get highest viewer award:\n");
	printf("1.shersah 2.goodness 3.bachchan panday 4.dasvi\n");
	scanf("%d",&option[0]);
	if(option[0]==1)
	  printf("Correct!!!!!\n");
	else
	  printf("Incorrect answer\n");
	  
	printf("QUESTION 2.\n which is your favourite movie:\n");
	printf("1.shershah 2.goodness 3.bachchan panday 4.dasvi\n");
		scanf("%d",&option[1]);
	if(option[1]==1)
	  printf("Correct!!!!!\n");
	else
	  printf("Incorrect answer\n");
	  
	printf("QUESTION 3.\n which is the most recent film that is hit :\n");
	printf("1.shershah 2.goodness 3.bachchan panday 4.dasvi\n");
		scanf("%d",&option[2]);
	if(option[2]==1)
	  printf("Correct!!!!!\n");
	else
	  printf("Incorrect answer\n");
}
void quiz3()
{
	int option[3];
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	printf("QUESTION 1.\n python is:\n");
	printf("1.Highlevel 2.lowlevel 3.midlevel 4.nolevel\n");
	scanf("%d",&option[0]);
	if(option[0]==1)
	  printf("Correct !!!!!\n");
	else
	printf("Incorrect answer\n");
	
	
	printf("QUESTION 2.\n python is :\n");
	printf("1.compiler 2.interpreter 3.none of the above 3.both 1and 2\n");
		scanf("%d",&option[1]);
	if(option[1]==2)
	  printf("Correct !!!!!\n");
	else
	printf("Incorrect answer\n");
	
	printf("QURSTION 3.\n python use yhe file for store:/n");
	printf("1. .py 2. .c 3.both 4. none of the above\n");
		scanf("%d",&option[2]);
	if(option[2]==1)
	  printf("Correct !!!!!\n");
	else
	printf("Incorrect answer\n");
}

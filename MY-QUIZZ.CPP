#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
clrscr();

textcolor(14+BLINK);
printf("\t\t\t\t");
cprintf("!!...Quiz Game...!!\n");

int score=0, wrong=0, correct=0;
char ask[20];
int i,j,z;
int alphabet=0;
int state=0;
char player[30];

printf("\n");
cprintf("Enter your Name:");
scanf("%s",&player);
printf("\n");

textcolor(15);
cprintf("WELCOME %s...",strupr(player));
printf("\n");
cprintf("Enter [1] To Start and [0] To Quit:");
scanf("%d",&j);

if(j==0)
{
clrscr();
textcolor(10+BLINK);
cprintf("\nGAME OVER...");
delay(3000);
exit(0);
}
else if(j==1)
{
textcolor(15);
printf("\n\nInstructions that are supposed to be followed while playing this game" );

printf("\nQuiz Game in C\n " );
printf("......................................................" );
printf("\n1) You are supposed to answer 20 questions in this game !! " );
printf("\n2) There will be 4 options given for each questions which are marked with a serial number starting from 1 to 4 and there are few riddle questions too." );
printf("\n3) For each correct answer, you will be awarded with 1 points !! " );
printf("\n4) As soon as you answer a question, you will be directed to the next question without any pause." );
printf("\n\n !! Wish you all the best !! \n\n " );
delay(8000);
clrscr();
do{
printf("\n\nQ1. Which of the following mineral is called 'Black Gold'?");
printf("\n1) Granite\t\t2) Natural gas");
printf("\n3) Petroleum\t\t4) Coal");
printf("\nSelect Option:");
scanf("%s",&ask);
  int alphabet = 0;
    for (i = 0; ask[i] != '\0'; i++)
    {

    if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
	    alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }


  }while(state!=1);

z=strcmp(ask,"3");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
	printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ2. How many joules are there in one calorie?");
printf("\n1) 3.186 J\t\t2) 4.186 J");
printf("\n3) 5.186 J\t\t4) 6.186 J");
printf("\nSelect Option:");
scanf("%s",&ask);
  int alphabet = 0;
    for (i = 0; ask[i] != '\0'; i++)
    {

    if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/'|| ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
	    alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }


  }while(state!=1);

z=strcmp(ask,"2");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
	printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ3. In which year did the Titanic sink?");
printf("\n1) 1920\t\t2) 1932");
printf("\n3) 1902\t\t4) 1912");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"4");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ4. Who wrote the play 'Romeo and Juliet'?");
printf("\n1) William Shakespeare\t\t2) Charles Dickens");
printf("\n3) F.Scott Fitzgerald\t\t4) Jane Austen");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"1");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ5. What is the smallest prime number?");
printf("\n1) 1\t\t2) 2");
printf("\n3) 3\t\t4) 0");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"2");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ6. In computer science, what does the acronym GPU stand for?");
printf("\n1) General Processing Unit\t\t2) Global Processing Unit");
printf("\n3) Graphics Programming Unit\t\t4) Graphics Processing Unit");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);
z=strcmp(ask,"4");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
}
delay(800);
clrscr();
do{
printf("\n\nQ7. Which acid is released when an Ant bites?");
printf("\n1) Formic Acid\t\t2) Hydrochloric Acid");
printf("\n3) Acetic Acid\t\t4) Phosphoric Acid");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"1");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ8. Which of the following is not a type of computer code?");
printf("\n1) EDIC\t\t2) ASCII");
printf("\n3) BCD\t\t4) EBCDIC");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/'|| ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"1");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ9. What car brand uses a prancing horse as its logo?");
printf("\n1) Ferrari\t\t2) Ford");
printf("\n3) Toyota\t\t4) Lamborghini");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"1");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ10.  Which car company is owned by the Volkswagen Group?");
printf("\n1) Ford\t\t\t2) Lamborghini");
printf("\n3) Bugatti\t\t4) Ferrari");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"3");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ11. What is the meaning of HTTP that is used in website addresses?");
printf("\n1) Hypertext Transmission Property\t\t2) Hypertext Transfer Protocal");
printf("\n3) Hypertext Transmission Protocal\t\t4) None");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"2");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ12. On which principle hydrogen bomb is based on?");
printf("\n1) Uncontrolled fusion rxn\t\t2) Controlled fusion rxn ");
printf("\n3) Uncontrolled fission rxn\t\t4) Controlled fission rxn");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/'|| ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"1");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
printf("\n\nQ13. There is only one word in the dictionary that's spelled wrong. What is it?");
printf("\nAnswer:");
scanf("%s",&ask);
i=strcmp(ask,"wrong");
if(i==0) {
printf("Correct..!!");
score++;
correct++;
}
else{
printf("Wrong..!!");
wrong++;
}
clrscr();
printf("\n\nQ14. What 5-letter word typed in all capital letters can be read the same upside down?");
printf("\nAnswer:");
scanf("%s",&ask);
i=strcmp(ask,"SWIMS");
if(i==0) {
printf("Correct..!!");
score++;
correct++;
}
else{
printf("Wrong..!!");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ15. Which of the following is an anti-knocking compound that has been phased out in many countries so far?");
printf("\n1) Lead tetrachloride\t\t2) Tetra Ethyl Lead");
printf("\n3) Ethyl acetate\t\t4) Trihydric tetrachloride");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"2");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();

do{
printf("\n\nQ16. What is the PH of human blood?");
printf("\n1) 7\t\t2) 8.2");
printf("\n3) 7.4\t\t4) 6.5");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"3");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
printf("\n\nQ17. I am easy to lift, but hard to throw. What am I?");
printf("\nAnswer:");
scanf("%s",&ask);
i=strcmp(ask,"feather");
if(i==0) {
printf("Correct..!!");
score++;
correct++;
}
else{
printf("Wrong..!!");
wrong++;
}
delay(800);
clrscr();
printf("\n\nQ18. What is always in front of you, but can't be seen?");
printf("\nAnswer:");
scanf("%s",&ask);
i=strcmp(ask,"future");
if(i==0) {
printf("Correct..!!");
score++;
correct++;
}
else{
printf("Wrong..!!");
wrong++;
}
delay(800);
clrscr();
do{
printf("\n\nQ19. If 3 friends contribute an equal amount of money to buy a gift that costs Rupees.18000, how much money each friend contribute?");
printf("\n1) NRs.5000\t\t2) NRs.6000");
printf("\n3) NRs.7000\t\t4) NRs.8000");
printf("\nSelect Option:");
scanf("%s",&ask);
int alphabet = 0;
for (i = 0; ask[i] != '\0'; i++)
{
if ((isalpha(ask[i]) != 0) || ask[i] == '+' || ask[i] == '-' || ask[i] == '*' || ask[i] =='/' || ask[i] == '%'|| ask[i]<'1'||ask[i]>'4' )
 alphabet++;
 }
 if(alphabet==0)
 {
     state=1;
 }
 else
 {
     state=0;
     printf("Enter a valid no");
 }
  }while(state!=1);

z=strcmp(ask,"2");
if(z==0)
{
printf("correct");
score++;
correct++;
}
else
{
printf("wrong");
wrong++;
}
delay(800);
clrscr();
printf("\n\nQ20. What is 3/7 chicken, 2/3 cat, and 2/4 goat?");
printf("\nAnswer:");
scanf("%s",&ask);
i=strcmp(ask,"chicago");
if(i==0) {
printf("Correct..!!");
score++;
correct++;
}
else{
printf("Wrong..!!");
wrong++;
}
delay(800);
clrscr();
printf("\nYour score=%d\n",score);
if(score<=12)
{
textcolor(15+BLINK);
cprintf("Better Luck Next Time...!!(NOOB)");
delay(3000);
exit(0);
}
else{
textcolor(15+BLINK);
cprintf("Well Played...!!(PRO)");
delay(3000);
exit(0);
}
}
else{
clrscr();
textcolor(10+BLINK);
cprintf("\nINVALID USER...");
delay(3000);
exit(0);
}

getch();

}

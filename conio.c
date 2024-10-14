/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
int main()
{
  textbackground(BLUE);
  clrscr();  
  textcolor(WHITE);
  gotoxy(30,5);
  cprintf("Hello World WHITE");
  textcolor(YELLOW);
  gotoxy(30,6);
  cprintf("Hello World YELLOW");    
  for(int i=0;i<16;i++){
    textcolor(i);
    gotoxy(1,2+i);
    cprintf("Hello World"); 
    }  
  getch();
    return 0;
}

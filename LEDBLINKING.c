#include <AT89S52.h> /*header fille*/
void wait(){ /* delay user define not return function */
char i;
for(i=0;i<=100;i++) /* empty for loop 100 times runing*/
{}
}
void main() /* main function declaration*/
{

 	
  	while(1)/* infinite while loop
  	  {
		P0_1=0;  /* port 0 select to pin 0 high led on */
		wait();  /*wait function call to timeing dealay*/
		P0_1=1;  /*port 0 select to pin 0 high led Off*/
		wait();  /*wait function call to timeing dealay*/
  	  }

}

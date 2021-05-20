
/***************************************************************************
* File Name         Source1.c
* Description       Template for code page.
*					Example of a well documented code.
*
* Date				Name						Action
* May 20, 2021		David Calles M.				First Implementation
***************************************************************************/

/**************************************************************************
-------------------------- PRECOMPILER DEFINITIONS ------------------------
***************************************************************************/

#define BYTE_NUM 8
#define MIN(X,Y) (X<Y?X:Y)

/**************************************************************************
---------------------------- LIBRARY DEFINITIONS --------------------------
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**************************************************************************
---------------------------- FUNCTION PROTOTYPES --------------------------
***************************************************************************/

uint16_t	ExampleFunction		(float, uint16_t);
int8_t		ExampleFunction2	(int8_t, double);

/**************************************************************************
------------------------------ GLOBAL VARIABLES ---------------------------
***************************************************************************/

const double	pi = 3.14159;
static uint16_t	arr[5] = { 1, 2, 3, 4, 5 };
int8_t			a = 0, b = 5;
float			var_fl = 5.3, x_fl = 6.2;

/**************************************************************************
-------------------------------- MAIN FUNCTION ----------------------------
***************************************************************************/

int main() {

	uint16_t num1 = ExampleFunction (x_fl, arr[1]);
	int8_t	 num2 = ExampleFunction2(b, pi);

	printf( "Hello World! %d, %d\n", num1, num2 );

	return 0;
}

/**************************************************************************
---------------------------- FUNCTION DEFINITIONS --------------------------
***************************************************************************/

/*--------------------------------------------------------------------------
*	Name:			ExampleFunction
*	Description:	Multiplies 2 numbers 
*	Parameters:		a: Floating point 1st number
*					b: 16-bit unsigned 2nd number
*	Returns:		r: 16-bit unsigned result
---------------------------------------------------------------------------*/
uint16_t	ExampleFunction(float a, uint16_t b) {
	uint16_t r = ((uint16_t)a * b);
	return r;
}

/*--------------------------------------------------------------------------
*	Name:			ExampleFunction2
*	Description:	Divides 2 numbers
*	Parameters:		a: Floating point 1st number
*					b: 16-bit unsigned 2nd number
*	Returns:		r: 16-bit unsigned result
---------------------------------------------------------------------------*/
int8_t		ExampleFunction2(int8_t a, double b) {
	int8_t r = (a / (int8_t)b);
	return r;
}
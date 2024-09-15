#pragma once

// Declaration and definition of MyInt. Other functions will change this number.
int MyInt = 0;



// Notes: the two following functions are what we call Setters and Getters. They set and get a variable!
// Later when you learn about Object Oriented Programming and classes, it will be a good practice to
// use setters and getters to access your variables when you want to access them from outside the same class.
// which is why i am including them here, to learn you about them

/**
* Returns the value of MyInt
* 
* Note: the following "@return" is a tag in JavaDoc style. hover your cursor over this function's name to see what it does!
* 
* @return MyInt
*/
int GetMyInt();

/**
* Sets the value of MyInt
* 
* @param newInt: The new value of MyInt
*/
void SetMyInt(int newInt);

/**
* Adds a number to MyInt
* 
* @param addend: The number to add to MyInt
*/
void AddToMyInt(int addend);

/**
* Raises MyInt by the power of the exponent.
* 
* @param exponent: The power to raise MyInt to
* 
* Hint: Use either MultiplyMyInt and loops, or the pow() function from the cmath library
* 
* Note: This is Potens in Norwegian
*/
void ExponentMyInt(int exponent);

/**
* Multiplies MyInt by a number
* 
* @param multiplier: The number to multiply MyInt by
*/
void MultiplyMyInt(int multiplier);

/**
* Divides MyInt by a number
* 
* @param divisor: The number to divide MyInt by
*/
void DivideMyInt(int divisor);

/**
* Divides a number by MyInt
* 
* @return The result of the division
*/
int DivideByMyInt(int dividend);


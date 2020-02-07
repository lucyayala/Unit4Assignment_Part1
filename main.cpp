/* 
Lucy Ayala COSC: 1436-57002
Date: 02/06/2020 IDE: Repl.it tool 
Unit 4 Assignment Loops Part 1
Comments: This program calculates a value in different ways.
*/

#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int main() 
{
//declare and initialize variables
int value = 0, counter = 0;

double doublevalue = 0.0, dividevalue = 0.0,
calvalue= 0.0, addvalue = 0.0;

do//Give them the option to exit or loop the program 
{
//Ask to enter a value
  cout << "Please enter a value or enter -1 to exit program: " << endl;
  value = validateInt(value); //validate my integer by function call

  counter ++;
    if ( value != -1) //Give them the decision to exit or continue with program
     {

       //Calculate and display results
        doublevalue = value * value;
        dividevalue = value / value;
        calvalue= (value +3.0)/5.0;
        addvalue = calvalue + ((value+7.0)/2.0);

       cout << "The number entered times itself equals: " << doublevalue << endl;
       cout << "The number entered divided by itself equals: " <<dividevalue << endl;
       cout << "(Number entered +3)/5 = " << calvalue << endl;
       cout << "[((Number entered +3)/5) + ((Number entered +7)/2) = " << addvalue << endl;
     }
   else if (value == -1)
    {
      cout << "You have decided to exit. The value of the counter is: " << counter << endl;
    }

}
while ( value != -1);

  return 0;
}
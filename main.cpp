/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (KietVo9): Unit_4_Assignment
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
  double n = 0.0, timeItself = 0.0, divideItself =0.0, output1 = 0.0, output2 = 0.0;//Declare and initialize variable
  do
  {
    cout <<"Please enter a number (-1 to exit): ";
        n = validateDouble(n);//accept number and validate data type
    if (n == -1.0)
      {
        cout << "\nExit the program... " << endl;
      }
      else
      { 
        //process
        timeItself = n * n;
        divideItself = n / n; // if n = 0 the result will be -nan
        output1 = (n + 3) / 5;
        output2 = ((n + 3) / 5 + (n + 7) / 2);

        //output
        cout <<"\nThe number entered times itself: " <<"n"<<" * "<<"n"<<" = "<< timeItself << endl;
        cout <<"The number entered divides itself: " <<"n"<<" / "<<"n"<<" = "<< divideItself << endl;
        cout << "(" <<" n "<<" + "<<" 3 "<<") "<<" / "<<" 5 "<< " = " << output1 <<endl;
        cout <<"(" <<" n "<<" + "<<" 3 "<<") "<<" / "<<" 5 "<<" + "<<" (" <<" n "<<" + "<<" 7 "<<") "<<" / "<<" 2 "<<" = " << output2 << endl;
      }

  }while(n != -1); //end do

  //Couter variable
  
   
    return 0;
}

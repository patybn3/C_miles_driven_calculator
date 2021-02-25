//
//  main.c
//  assignment3_5_patriciaantlitz
//
//  Created by Patricia Antlitz on 2/10/21.

/*---------------------------------------------------------------------*/
     /* Student Name: Patricia Antlitz                                 */
     /* Submission Date: Feb 10, 2021                                  */
     /* Program 5: Write a program that calculates your daily driving
        costs. Your program should accept the following information
        and display the user's cost per day of driving:
        1 - Total miles driven per day
        2 - Cost per gallon of gasoline
        3 - Average miles per gallon
        4 - Parking fees per day (if applicable)
        5 - Tolls per day (if applicable)                               */
 
 /*
 *
 * Week #: 2
 * Problem #: 5
 * Filename: assignment3_5_patriciaantlitz.c
 *
 * Notes:
 *        -  This program works when compiled and ran on the CLI or when
            compiled by a IDE. It allows the calculation of the avarage cost of the
            user's daily drive.
          -  This program was developed entirely by me. No other sources used
 
 * Sample Output:
    
  How many miles do you drive a day?
  35
  In avarage, What is the current cost of a gallon of gas?
  3
  What is your car's avarage miles per gallon (mpg)?
  30
  How much do you pay for parking daily?
  3
  How much do you pay for tolls daily?
  2
  The avarage cost of your daily drive is: $8.50
  Program ended with exit code: 0
 *
 */
/*-----------------------------------------------------------------------*/

//includes stdio library that allows the usage of builtin fucntions
#include <stdio.h>
//main function holds runs this program passing the required params
int main(int argc, const char * argv[]) {
    // insert code here...
    /* Variables are initiated without a value, to be assigned later
       Variables of type double to allow the calculation of decimals (cents) */
    double milesDriven;
    double gallonCost;
    double milesPerGallon;
    double parkFees;
    double tollCost;
    double costTotal;
    double dailyDrive;

    //first printf call asks the user for an input on the number of miles driven
    printf("How many miles do you drive a day?\n");
    //scanf received the user's entry and assign it to variable milesDriven
    scanf("%lf", &milesDriven);
    //asks user for the avarage cost of the gas gallon
    printf("In avarage, What is the current cost of a gallon of gas?\n");
    //assigns entry to variable gallonCost
    scanf("%lf", &gallonCost);
    //asks user for the car's mpg
    printf("What is your car's avarage miles per gallon (mpg)?\n");
    //assigns it to variable milesPerGallon
    scanf("%lf", &milesPerGallon);
    //parking cost
    printf("How much do you pay for parking daily?\n");
    scanf("%lf", &parkFees);
    //toll cost
    printf("How much do you pay for tolls daily?\n");
    scanf("%lf", &tollCost);
    
    /*divides the entry assigned to gallonCost (price per gallon) by the entry
     assigned to milesPerGallon (mpg) and assings it to variable dailyDrive*/
    dailyDrive = (gallonCost / milesPerGallon);
    /* costTotal will multiply the value of dailydrive by the total miles driven
     and add the costs of the parking and toll if any */
    costTotal = parkFees + tollCost + (dailyDrive * milesDriven);
    /*prints the avarage cost of the daily drive allowing it two print two integers
     passed the decimal point and calling the value of variable costTotal */
    printf("The avarage cost of your daily drive is: $%.2lf\n\n", costTotal);

    //if successful pass as code 0
    return 0;
}

//end.

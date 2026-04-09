/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program calculates the gross and net salary of an employee based on the basic pay, HRA, TA, and tax deductions.
*/

//Library Included:
#include <stdio.h>

//Main:
int main()
{
    float basic, hra, ta, gross, tax, net;

    // Input
    printf("Enter Basic Pay: ");
    scanf_s("%f", &basic);

    // Calculations
    hra = 0.10 * basic;
    ta = 0.05 * basic;
    gross = basic + hra + ta;
    tax = 0.02 * gross;
    net = gross - tax;

    // Output
    printf("\nGross Salary: %.2f", gross);
    printf("\nNet Salary Payable: %.2f", net);

    return 0;
}
/**
 * @file print_tenth.c
 *
 * @brief Main source code for Print Tenth program.
 *
 * This file contains the main entry point and the implementation
 * of the Print_Tenth function that iterates form 10 to 51 and
 * prints a message every 10th iteration (10, 20, 30, 40, 50)
 * and a different message following the 10th iteration (11, 21,
 * 31, 41, 51)
 *
 * @author Erik Santos
 */

 #include <stdio.h>

 void Print_Tenth();

 void Print_Tenth(void)
 {
    for (int i = 10; i <= 51; i++)
    {
        if (i % 10 == 0)
        {
            printf("Index %d: Every 10th iteration. \n", i);
        }
        else if ((i-1) % 10 == 0)
        {
            printf("Index %d: Following the 10th iteration.\n", i);
        }
    }
 }

 int main()
 {
    Print_Tenth();
    return 0;
 }
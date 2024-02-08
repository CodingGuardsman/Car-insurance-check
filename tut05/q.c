// @file q.c
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Lab 05
//@date 30/9/2022
//@brief This q.c file is the calculation for the costs for insurance and how to flip.

#include <stdio.h>
#include "q.h"

// calculating the cost for each scenario after scanning the particular scenario.
void cost(void)
{
    int age; int accidents; int insurance;
    scanf("%d,%d", &age, &accidents);
    if (age <= 15)
    {
        printf("age = %d, number of accidents = %d, no insurance coverage!\n", age, accidents);
    }

    else if ((age > 15 && age < 25) && accidents == 0)
    {
        insurance = 500 + 0 + 50;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age > 15 && age < 25) && accidents > 0 && accidents <3)
    {
        insurance = 500 + 100 + 50;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age > 15 && age < 25) && accidents > 2 && accidents <5)
    {
        insurance = 500 + 225 + 50;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age > 15 && age < 25) && accidents >=5)
    {
        printf("age = %d, number of accidents = %d, no insurance coverage!\n", age, accidents);
    }

    else if ((age >= 25 ) && accidents == 0)
    {
        insurance = 500 + 0 + 0;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age >= 25 ) && accidents > 0 && accidents <3)
    {
        insurance = 500 + 100 + 0;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age >= 25 ) && accidents > 2 && accidents <5)
    {
        insurance = 500 + 225 + 0;
        printf("age = %d, number of accidents = %d, insurance cost = %d\n", age, accidents, insurance);
    }

    else if ((age >= 25) && accidents >=5)
    {
        printf("age = %d, number of accidents = %d, no insurance coverage!\n", age, accidents);
    }
}

// Needs to initialise the reverse value into a variable to avoid mess-ups. In order to flip it, need to modulo for the laast digit
// Then need to modulo the value again for the next digit.
void rev(void)
{
    int integer; int remainder; int reverse = 0;
    scanf("%d", &integer);
    {
        while (integer != 0)
        {
            remainder = integer%10;
            reverse = reverse * 10 + remainder;
            integer /= 10;
        }
    printf("%d\n", reverse);
    }
}

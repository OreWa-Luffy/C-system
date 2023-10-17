/*
        * ==============================================================================*
        *  A basic calculator project that will hopefully be expanded on with a gui
        *  and other features i wanna eventually implement into the system such as.
        *
        *
        *  time in a digital clock
        *  a functioning gui system
        *  handling more than 2 variables at once
        *  a .exe output
        *
        * ==============================================================================*
        */

#include <stdio.h>
#include "functions.h"
int main() {

    double variable;
    double variable2;
    printf("Enter variable: ");
    scanf("%lf",&variable);

    int hold = 1;
    while(hold == 1) {


        /*
         * ==============================================================================*
         *  Generates the menu pop up using number as identifier for switch case later on*
         *  So far options are limited but looking at adding more soon                   *
         * ==============================================================================*
         */

        int number;
        printf("variable is %lf", variable);
        printf("\nselect from your following options,\n 0: quit \n 1: add variable \n 2: Subtract variable \n 3: multiply variable \n 4: divide variable \n 5: Clear variable \n 6: square root  \n 7: Power of \n" );
        scanf("%d", &number);

        /*
        * ==============================================================================*
        *  Switch case statement acts as the menu system, uses an input to select each
        *  case but want to change this to a click on a menu.
        * ==============================================================================*
        */




        double result;
        switch (number) {


            case 1:
                /*
                * ==============================================================================*
                *    Adding two variables together
                * ==============================================================================*
                */

                printf("Enter variable: ");
                scanf("%lf", &variable2);
                result = add_them_up(variable, variable2);
                printf("calculating %lf%s%lf%s",variable," added by ",variable2, "...\n ");
                variable = result;
                break;

            case 2:

                /*
                * ==============================================================================*
                * Subtracting two variables
                * ==============================================================================*
                */

                printf("Enter variable: ");
                scanf("%lf", &variable2);
                result = minus_them(variable, variable2);
                printf("calculating %lf%s%lf%s",variable," subtracted by ",variable2, "...\n ");
                variable = result;
                break;

            case 3:

                /*
                * ==============================================================================*
                *       Multiplying two variables
                * ==============================================================================*
                */

                printf("Enter variable: ");
                scanf("%lf", &variable2);
                result = multiply_them(variable, variable2);
                printf("calculating %lf%s%lf%s",variable," multiplied by ",variable2, "...\n ");
                variable = result;
                break;


            case 4:

                /*
                * ==============================================================================*
                *      Dividing two variables
                * ==============================================================================*
                */

                printf("Enter variable: ");
                scanf("%lf", &variable2);
                result = divide_them(variable, variable2);
                variable = result;
                break;

            case 5:

                /*
                * ==============================================================================*
                *      Clearing a variable and entering a new one
                * ==============================================================================*
                */

                variable = 0;
                printf("Enter variable: ");
                scanf("%lf", &variable);
                break;

            case 6:

                /*
                * ==============================================================================*
                *      Square root of a variable
                * ==============================================================================*
                */


                result = square_root(variable);
                variable = result;
                break;


            case 7:

                /*
                * ==============================================================================*
                *        the power of a number by the second variable.
                * ==============================================================================*
                */

                printf("Enter variable: ");
                scanf("%lf", &variable2);
                result = power_of(variable,variable2);
                printf("calculating %lf%s%lf%s", variable, " by the power of ",variable2,"...\n");
                variable = result;
                break;

            case 0:

                /*
                * ==============================================================================*
                * Breaks the loop and ends the program.
                * ==============================================================================*
                */

                hold = 2;
                break;

            default:

                /*
                * ==============================================================================*
                *         Error checking.
                * ==============================================================================*
                */

                printf("error, input did not match..");
        }

    }


}

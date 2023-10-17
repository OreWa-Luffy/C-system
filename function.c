//
// Created by Logan on 10/10/2023.
//
#include "functions.h"
#include <math.h>

double add_them_up(double x ,double y){         // adds the two variables together

    double temp;

    temp = x+y;

    return temp;

}


double minus_them(double x, double y){          // minuses the two variables

    double temp;

    temp = x-y;

    return temp;
}

double multiply_them(double x, double y){     // multiplies them

    double temp;

    temp = x*y;

    return temp;
}

double divide_them(double x, double y){     // divides them

    double temp;

    temp = x/y;

    return temp;
}


double square_root(double x){           // uses .math to get the square root of the number

    double temp;

    temp = sqrt(x);

    return temp;
}



double power_of(double x, double y){        // uses .math to get the power of a number
    double temp;

    temp = pow(x,y);

    return temp;
}
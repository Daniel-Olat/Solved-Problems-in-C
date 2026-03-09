#include "difference_of_squares.h"
//Code to find the sum of squares, squares of sum and the difference between the two squares for the first "n" natural numbers
unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= number; i++){
        sum += i*i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = 0;
    for (unsigned int i =1; i<=number; i++){
        sum += i;
    }
    return sum * sum;
}

unsigned int difference_of_squares(unsigned int number){
    unsigned int sumSquare = sum_of_squares(number);
    unsigned int squareSum = square_of_sum(number);
    unsigned int difference = squareSum - sumSquare;
    return difference;
}
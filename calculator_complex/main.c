#include <stdio.h>
#include "complex_calculator.h"
/**
 * @brief The main functions runs the complex calculator program on 5 different inputs and outputs
 * 
 * @return int 
 */
int main()
{
    //TODO Write all the logic for Calculator app
    printf("Complex calculator :\n\n");

    static float realval_n1[] = {5, 23, 4,- 7, 0};
    static float realval_n2[] = {10, 17, -9, -5, 4 };

    static float imagval_n1[] = {2.4f, 3.6f, -2, 1.5f, -11};
    static float imagval_n2[] = {-1.45f, -2.34f, 9.87f, 0.56f, -14.14f};

    static complex_t n1 ={0,0} , n2 ={0,0};
    static complex_t sum= {0,0}, diff ={0,0}, prod ={0,0}, quot={0,0};

    for(int i =0;i<5;i++){
        n1.real = realval_n1[i];
        n2.real = realval_n2[i];

        n1.imaginary = imagval_n1[i];
        n2.imaginary = imagval_n2[i];

        printf("Performing all operations on numbers %f + (%f)i  and %f + (%f)i\n",n1.real,n1.imaginary,n2.real,n2.imaginary);
        complex_sum(&n1, &n2, &sum); 
        printf("Sum = %f + (%f) i\n",sum.real,sum.imaginary);
        
        complex_diff(&n1, &n2, &diff );
        printf("Difference = %f + (%f) i\n",diff.real,diff.imaginary);
        
        complex_prod(&n1, &n2, &prod);
        printf("Product = %f + (%f) i\n",prod.real,prod.imaginary);

        complex_div(&n1, &n2, &quot);
        printf("Quotient = %f + (%f) i\n",quot.real,quot.imaginary);

        printf("\n");

    } 
    return 0;
}
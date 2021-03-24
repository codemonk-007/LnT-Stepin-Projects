#include <stdio.h>
#include "complex_calculator.h"
/**
 * @brief The main functions runs the complex calculator program on 5 different inputs and outputs the results of all the 4 operations performed
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
/* OUTPUT
Complex calculator :

Performing all operations on numbers 5.000000 + (2.400000)i  and 10.000000 + (-1.450000)i
Sum = 15.000000 + (0.950000) i
Difference = -5.000000 + (3.850000) i
Product = 53.480000 + (16.750000) i
Quotient = 0.455621 + (0.306065) i

Performing all operations on numbers 23.000000 + (3.600000)i  and 17.000000 + (-2.340000)i
Sum = 40.000000 + (1.260000) i
Difference = 6.000000 + (5.940000) i
Product = 399.424011 + (7.379997) i
Quotient = 1.299177 + (0.390593) i

Performing all operations on numbers 4.000000 + (-2.000000)i  and -9.000000 + (9.870000)i
Sum = -5.000000 + (7.870000) i
Difference = 13.000000 + (-11.870000) i
Product = -16.260000 + (57.480000) i
Quotient = -0.312414 + (-0.120392) i

Performing all operations on numbers -7.000000 + (1.500000)i  and -5.000000 + (0.560000)i
Sum = -12.000000 + (2.060000) i
Difference = -2.000000 + (0.940000) i
Product = 34.160000 + (-11.420000) i
Quotient = 1.415840 + (-0.141426) i

Performing all operations on numbers 0.000000 + (-11.000000)i  and 4.000000 + (-14.140000)i
Sum = 4.000000 + (-25.139999) i
Difference = -4.000000 + (3.140000) i
Product = -155.540009 + (-44.000000) i
Quotient = 0.720294 + (-0.203761) i

*/

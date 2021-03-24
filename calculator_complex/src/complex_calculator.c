#include "stdlib.h"
#include <stdio.h>
#include "complex_calculator.h"

error_t complex_sum(complex_t* cnum1, complex_t* cnum2, complex_t* csum)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    csum->real = cnum1->real + cnum2->real;
    csum->imaginary = cnum1->imaginary + cnum2->imaginary;

    // printf("Sum = %f + (%f) i\n",csum->real,csum->imaginary);

    return SUCCESS;

}

error_t complex_diff(complex_t* cnum1,complex_t* cnum2,complex_t* cdiff){
    
    if(cnum1==NULL||cnum2 == NULL)return ERROR_NULL_PTR;

    cdiff->real = cnum1->real - cnum2->real;
    cdiff->imaginary = cnum1->imaginary - cnum2->imaginary;

    // printf("Difference = %f + (%f) i\n",cdiff->real,cdiff->imaginary);

    return SUCCESS;
}

error_t complex_prod(complex_t* cnum1, complex_t* cnum2, complex_t* cprod){

    if(cnum1 == NULL||cnum2 == NULL)return ERROR_NULL_PTR;

    float real_prod = cnum1->real*cnum2->real - cnum1->imaginary*cnum2->imaginary;
    float imag_prod = cnum1->real*cnum2->imaginary + cnum1->imaginary*cnum2->real;

    cprod->real = real_prod;
    cprod->imaginary = imag_prod;

    // ("Product = %f + (%f) i\n",cprod->real,cprod->imaginary);
    return SUCCESS;
}

error_t complex_div(complex_t* cnum1,complex_t* cnum2,complex_t* cquot){

    if(cnum1 == NULL || cnum2== NULL)return ERROR_NULL_PTR;
    if(cnum2->real==0 && cnum2->imaginary==0)return ERROR_DIV_BY_ZERO;

    float real_numerator = (cnum1->real * cnum2->real) + (cnum1->imaginary * cnum2->imaginary);
    float denominator= (cnum2->real*cnum2->real) + (cnum2->imaginary * cnum2->imaginary);

    float imag_numerator = (cnum1->imaginary * cnum2->real) - (cnum1->real * cnum2->imaginary);

    cquot->real =real_numerator / denominator;
    cquot->imaginary = imag_numerator/denominator;
    
    // printf("Quotient = %f + (%f) i\n",cquot->real,cquot->imaginary);

    return SUCCESS;

    }
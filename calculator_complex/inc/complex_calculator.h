/**
 * @file complex_calculator.h
 * @author Jay 
 * @brief Functions to perform Sum, Difference, Division and Multiplication on complex Varibales of \ref complex_t
 * @version 0.1
 * @date 2021-03-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

/**
 * @brief Structure for Complex number
 * 
 */
typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;


/**
* @brief computes sum of the two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] csum Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complex_sum(complex_t* cnum1, complex_t* cnum2, complex_t* csum);


/**
 * @brief computes difference of the two complex numbers
 * 
 * @param[in] cnum1 pointer to complex number1
 * @param[in] cnum2 pointer to complex number2
 * @param[out] cdiff pointer to store the difference of the two complex numbers
 * @return error_t SUCCESS if the operation is completed sucessfully. Error value otherwise.
 */
error_t complex_diff(complex_t* cnum1, complex_t* cnum2, complex_t* cdiff);

/**
 * @brief  computes product of the two complex numbers
 * 
 * @param[in] cnum1 pointer to complex number1
 * @param[in] cnum2 pointer to complex number2
 * @param[out] cprod pointer to store the product of the two complex numbers
 * @return error_t SUCCESS if the operation is completed successfully. Error value otherwise
 */

error_t complex_prod(complex_t* cnum1, complex_t* cnum2,complex_t* cprod);

/**
 * @brief performs division on the two complex numbers. NUMBER1 / NUMBER2
 * 
 * @param[in] cnum1 pointer to complex number1
 * @param[in] cnum2 pointer to complex number2
 * @param[out] cqout pointer to store the answer after the division operation is completed successfully.
 * @return error_t SUCESS if the opertaion is completed sucessfully.Error value otherwise.
 */

error_t complex_div(complex_t* cnum1,complex_t* cnum2,complex_t* cquot);
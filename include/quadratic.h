/**
 * Copyright (c) 2022 Walter Jacob
 *
 * SPDX-License-Identifier: MIT
 *
 */

/**
 * @file    quadratic.c
 * @author  Walter Jacob
 * @date    2022
 *
 * @brief Quadratic root finder library
 *
 * Definitely overkill, but this file contains the functions that are used by
 * the quadratic root finder program. They are refactored into this library
 * to give an example of a program that uses external headers/source files.
 */

#include <math.h>
#include <stddef.h>

/**
 * @brief Function to compute the roots of the quadratic polynomial.
 *
 * @param[in] a         Quadratic coefficient
 * @param[in] b         Linear coefficient
 * @param[in] c         Constant coefficient
 * @param[out] s        Pointer to output buffer
 * @return int          Number of real solutions
 */
int quadratic(double a, double b, double c, double *s, size_t s_len);
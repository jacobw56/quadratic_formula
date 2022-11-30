/**
 * Copyright (c) 2022 Walter Jacob
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "quadratic.h"

static double discriminant(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

int quadratic(double a, double b, double c, double s[], size_t s_len)
{
    /* Make sure the buffer is big enough. */
    if (s_len < 2)
    {
        return -1;
    }

    double dsc = discriminant(a, b, c);
    int ret = 0; /* No real solutions */

    /* One (repeated) real solution */
    if (dsc == 0.0)
    {
        s[0] = -1.0 * b / (2.0 * a);
        ret = 1;
    }

    /* Two unique (conjugate) real solutions */
    else if (dsc > 0.0)
    {
        double sqrt_dsc = sqrt(dsc);
        s[0] = (-1.0 * b + sqrt_dsc) / (2.0 * a);
        s[1] = (-1.0 * b - sqrt_dsc) / (2.0 * a);
        ret = 2;
    }

    return ret;
}
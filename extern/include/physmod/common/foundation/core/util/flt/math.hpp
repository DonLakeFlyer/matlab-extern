/* Copyright 2005-2021 The MathWorks, Inc. */

#ifndef math_hpp
#define math_hpp


/*!
 * compute a ^ b
 */
EXTERN_C
double pmf_pow(double a, double b);

/*!
 * compute a ^ b
 */
EXTERN_C
double pmf_pow_nfp(double a, double b);

/*!
 * compute sin(x)
 */
EXTERN_C double pmf_sin(double a);

/*!
 * compute cos(x)
 */
EXTERN_C double pmf_cos(double a);

/*!
 * compute tan(x)
 */
EXTERN_C double pmf_tan(double a);

/*!
 * compute asin(x)
 */
EXTERN_C double pmf_asin(double a);

/*!
 * compute asin(x)
 */
EXTERN_C
double pmf_asin_nfp(double a);

/*!
 * compute acos(x)
 */
EXTERN_C double pmf_acos(double a);

/*!
 * compute acos(x)
 */
EXTERN_C
double pmf_acos_nfp(double a);

/*!
 * compute atan(x)
 */
EXTERN_C double pmf_atan(double a);

/*!
 * compute atan2(x, y)
 */
EXTERN_C
double pmf_atan2(double a, double b);

/*!
 * compute exp(x)
 */
EXTERN_C double pmf_exp(double a);

/*!
 * compute exp(x)
 */
EXTERN_C double pmf_exp_nfp(double a);

/*!
 * compute log(x)
 */
EXTERN_C double pmf_log(double a);

/*!
 * compute log(x)
 */
EXTERN_C
double pmf_log_nfp(double a);

/*!
 * compute log10(x)
 */
EXTERN_C double pmf_log10(double a);

/*!
 * compute log10(x)
 */
EXTERN_C
double pmf_log10_nfp(double a);

/*!
 * compute sinh(x)
 */
EXTERN_C double pmf_sinh(double a);

/*!
 * compute cosh(x)
 */
EXTERN_C double pmf_cosh(double a);

/*!
 * compute tanh(x)
 */
EXTERN_C double pmf_tanh(double a);

/*!
 * compute sqrt(x)
 */
EXTERN_C double pmf_sqrt(double a);

/*!
 * compute sqrt(x)
 */
EXTERN_C
double pmf_sqrt_nfp(double a);

/*!
 * compute abs(x)
 */
EXTERN_C double pmf_abs(double a);

/*!
 * compute floor(x)
 */
EXTERN_C double pmf_floor(double a);

/*!
 * compute mod(x)
 */
EXTERN_C
double pmf_fmod(double a, double b);

#endif /* include guard */

/**
 * @file datatypes.h
 * @brief Enumeration definitions for various numerical data types.
 * 
 * This header file defines enumerations representing multiple number data types including unsigned and signed integers of various sizes, as well as single and double precision floating-point types.
 * 
 * @note These enums improve code clarity by providing symbolic names for different numerical data formats, facilitating type management and conversions within the software.
 * 
 * @author g.raf
 * @date 2026-02-14
 * @version 1.0 Release
 * @copyright
 * Copyright (c) 2026 g.raf
 * Released under the GPLv3 License. (see LICENSE in repository)
 * 
 * @note This file is part of a larger project and subject to the license specified in the repository. For updates and the complete revision history, see the GitHub repository.
 * 
 * @see https://github.com/0x007e/shared-numeric "Shared Numeric Data Types GitHub Repository"
 */

#ifndef NUMERIC_DATATYPES_H_
#define NUMERIC_DATATYPES_H_

    /**
     * @enum NUMERIC_Type_t
     * @brief Defines different number data types.
     *
     * @details
     * This enumeration specifies various numerical data types that may be used in software,
     * including unsigned and signed integers of different sizes, as well as floating-point types.
     */
    enum NUMERIC_Type_t
    {
        NUMERIC_Unsigned_Int,   /**< Unsigned integer data type */
        NUMERIC_Unsigned_Long,  /**< Unsigned long integer data type */
        NUMERIC_Signed_Int,     /**< Signed integer data type */
        NUMERIC_Signed_Long,    /**< Signed long integer data type */
        NUMERIC_Float,          /**< Single precision floating-point data type */
        NUMERIC_Double          /**< Double precision floating-point data type */
    };
    /**
     * @typedef NUMERIC_Type
     * @brief Alias for enum NUMERIC_Type_t representing various number data types.
     */
    typedef enum NUMERIC_Type_t NUMERIC_Type;

#endif /* NUMERIC_DATATYPES_H_ */
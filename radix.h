/**
 * @file radix.h
 * @brief Enumeration for numerical radix options.
 * 
 * This header file defines an enumeration representing different radix (base) options for numerical values. The enumeration includes binary, decimal, and hexadecimal bases commonly used for representing numbers.
 * 
 * @note The provided typedef `NUMERIC_Radix` offers a convenient alias for the enumeration type, improving code clarity and consistency when specifying numeric bases.
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
 * @see https://github.com/0x007e/shared-numeric "Shared Numeric Radix GitHub Repository"
 */

#ifndef NUMERIC_RADIX_H_
#define NUMERIC_RADIX_H_

    /**
     * @enum NUMERIC_Radix_t
     * @brief Defines numerical radix (base) options.
     * 
     * @details
     * This enumeration specifies the numeric base used for representing numbers, including binary (base 2), decimal (base 10), and hexadecimal (base 16).
     */
    enum NUMERIC_Radix_t
    {
        NUMERIC_Binary = 2,      /**< Binary radix (base 2) */
        NUMERIC_Decimal = 10,    /**< Decimal radix (base 10) */
        NUMERIC_Hexadecimal = 16 /**< Hexadecimal radix (base 16) */
    };
    /**
     * @typedef NUMERIC_Radix
     * @brief Alias for enum NUMERIC_Radix_t representing numerical radix options.
     */
    typedef enum NUMERIC_Radix_t NUMERIC_Radix;

#endif /* NUMERIC_RADIX_H_ */
/** @file excompiler.h
 *
 *  Functions to facilitate the conversion of a ex to a function pointer suited for
 *  fast numerical integration. */

/*
 *  GiNaC Copyright (C) 1999-2010 Johannes Gutenberg University Mainz, Germany
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __ROMB_EXCOMPILER_H__
#define __ROMB_EXCOMPILER_H__

#include <ginac/lst.h>

#include <string>

namespace RoMB {

//class ex;
//class symbol;
  //class lst;
  using GiNaC::symbol;
  using GiNaC::ex;
  using GiNaC::lst;
  
/**
 * Function pointer with one function parameter.
 */
typedef double (*FUNCP_1P) (double);

/**
 * Function pointer with two function parameters.
 */
typedef double (*FUNCP_2P) (double, double);

/**
 * Function pointer for use with the CUBA library (http://www.feynarts.de/cuba).
 */
typedef void (*FUNCP_CUBA) (const int*, const double[], const int*, double[]);

/**
 * Function pointer for use with the CUBA library v.2 (http://www.feynarts.de/cuba).
 */
 typedef int (*FUNCP_CUBA2) (const int*, const double[], const int*, double[],void*);

/**
 * Function pointer for use with the CUBA library v.2 and complex numbers
 */
 typedef void (*FUNCP_CUBA2C) (const int*, const double[], const int*, double[],void*);



/**
 * Takes an expression and produces a function pointer to the compiled and linked
 * C code equivalent in double precision. The function pointer has type FUNCP_1P.
 *
 * @param expr Expression to be compiled
 * @param sym Symbol from the expression to become the function parameter
 * @param fp Returned function pointer
 * @param filename Name of the intermediate source code and so-file. If
 * supplied, these intermediate files will not be deleted
 */
void compile_ex(const ex& expr, const symbol& sym, FUNCP_1P& fp, const std::string filename = "");

/**
 * Takes an expression and produces a function pointer to the compiled and linked
 * C code equivalent in double precision. The function pointer has type FUNCP_2P.
 *
 * @param expr Expression to be compiled
 * @param sym Symbol from the expression to become the function parameter
 * @param fp Returned function pointer
 * @param filename Name of the intermediate source code and so-file. If
 * supplied, these intermediate files will not be deleted
 */
void compile_ex(const ex& expr, const symbol& sym1, const symbol& sym2, FUNCP_2P& fp, const std::string filename = "");

/**
 * Takes an expression and produces a function pointer to the compiled and linked
 * C code equivalent in double precision. The function pointer has type FUNCP_CUBA.
 *
 * @param expr Expression to be compiled
 * @param sym Symbol from the expression to become the function parameter
 * @param fp Returned function pointer
 * @param filename Name of the intermediate source code and so-file. If
 * supplied, these intermediate files will not be deleted
 */
 void compile_ex(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA& fp, const std::string filename = "");

/**
 * Takes an expression and produces a function pointer to the compiled and linked
 * C code equivalent in double precision. The function pointer has type FUNCP_CUBA2.
 *
 * @param expr Expression to be compiled
 * @param sym Symbol from the expression to become the function parameter
 * @param fp Returned function pointer
 * @param filename Name of the intermediate source code and so-file. If
 * supplied, these intermediate files will not be deleted
 */
 void compile_ex(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA2& fp, const std::string filename = "");

/**
 * Takes an expression and produces a function pointer to the compiled and linked
 * C code equivalent in double precision. The function pointer has type FUNCP_CUBA.
 *
 * @param expr Expression to be compiled
 * @param sym Symbol from the expression to become the function parameter
 * @param fp Returned function pointer
 * @param filename Name of the intermediate source code and so-file. If
 * supplied, these intermediate files will not be deleted
 */
 void compile_ex_complex(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA& fp, const std::string filename = "");

 void compile_ex_complex(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA2& fp, const std::string filename = "");
 
 void compile_ex_real(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA2& fp, const std::string filename = "");
 void compile_ex_imag(const GiNaC::lst& exprs, const GiNaC::lst& syms, FUNCP_CUBA2& fp, const std::string filename = "");
/** 
 * Opens an existing so-file and returns a function pointer of type FUNCP_1P to
 * the contained function. The so-file has to be generated by compile_ex in
 * advance.
 *
 * @param filename Name of the so-file to open and link
 * @param fp Returned function pointer
 */
void link_ex(const std::string filename, FUNCP_1P& fp);

/** 
 * Opens an existing so-file and returns a function pointer of type FUNCP_2P to
 * the contained function. The so-file has to be generated by compile_ex in
 * advance.
 *
 * @param filename Name of the so-file to open and link
 * @param fp Returned function pointer
 */
void link_ex(const std::string filename, FUNCP_2P& fp);

/** 
 * Opens an existing so-file and returns a function pointer of type FUNCP_CUBA to
 * the contained function. The so-file has to be generated by compile_ex in
 * advance.
 *
 * @param filename Name of the so-file to open and link
 * @param fp Returned function pointer
 */
void link_ex(const std::string filename, FUNCP_CUBA& fp);

/**
 * Closes all linked .so files that have the supplied filename.
 *
 * @param filename Name of the so-file to close
 */
void unlink_ex(const std::string filename);

} // namespace GiNaC

#endif // ndef GINAC_EXCOMPILER_H

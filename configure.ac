dnl -*- bash -*-
dnl Process this file with autoconf to produce a configure script.
dnl
dnl Copyright (C) 2011 Monty Taylor
dnl
dnl Permission is hereby granted, free of charge, to any person
dnl obtaining a copy of this software and associated documentation
dnl files (the "Software"), to deal in the Software without
dnl restriction, including without limitation the rights to use,
dnl copy, modify, merge, publish, distribute, sublicense, and/or sell
dnl copies of the Software, and to permit persons to whom the
dnl Software is furnished to do so, subject to the following
dnl conditions:
dnl
dnl The above copyright notice and this permission notice shall be
dnl included in all copies or substantial portions of the Software.
dnl
dnl THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
dnl EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
dnl OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
dnl NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
dnl HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
dnl WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
dnl FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
dnl OTHER DEALINGS IN THE SOFTWARE.

AC_PREREQ(2.61)
AC_INIT([videoserver],[0.7.0],[http://www.inaugust.com])
AC_CONFIG_SRCDIR([videoServer/main.cc])
AC_CONFIG_AUX_DIR([config])

PANDORA_CANONICAL_TARGET(require-cxx, force-gcc42)

PKG_CHECK_MODULES([openframeworks],[openFrameworks])
PKG_CHECK_MODULES([opencv],[opencv])
PKG_CHECK_MODULES([libola],[libola])

AC_DEFINE([SKIP_FMODEX],[1],[fmodex is the devil])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

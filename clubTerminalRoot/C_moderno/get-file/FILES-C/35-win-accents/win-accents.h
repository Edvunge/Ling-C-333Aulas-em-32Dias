#pragma once
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef MS_STDLIB_BUGS
#  if ( _WIN32 || _WIN64 )
#    define MS_STDLIB_BUGS 1
#  else
#    define MS_STDLIB_BUGS 0
#  endif
#endif

#if MS_STDLIB_BUGS
#  include <io.h>
#  include <fcntl.h>
#endif

void init_locale(void){
  static const int wide_oriented = 1;

#if MS_STDLIB_BUGS
  static const char locale_name[] = ".1200";
  _setmode( _fileno(stdout), _O_WTEXT );
#else
  static const char locale_name[] = "";
#endif
  setlocale( LC_ALL, locale_name );
  fwide( stdout, wide_oriented );
}
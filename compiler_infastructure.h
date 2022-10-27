#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_COMPILER_INFASTRUCTURE
    #define COMPILER_INFASTRUCTURE_PUBLIC __declspec(dllexport)
  #else
    #define COMPILER_INFASTRUCTURE_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_COMPILER_INFASTRUCTURE
      #define COMPILER_INFASTRUCTURE_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define COMPILER_INFASTRUCTURE_PUBLIC
  #endif
#endif

#include <stdbool.h>

bool COMPILER_INFASTRUCTURE_PUBLIC start_compiler();
typedef COMPILER_INFASTRUCTURE_PUBLIC struct _compiler compiler;

struct _compiler
{

};


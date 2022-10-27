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

typedef COMPILER_INFASTRUCTURE_PUBLIC struct _token token;
typedef enum _operand operand;

enum _operand {
  ADD,
  REDUCE,
  
  MULTIPLY,
  DIVIDE,

  POWER, // to the power of
  SQRT,

  COMMA // this is used in function arguments.
};

struct _token
{
  char c;
  operand o;
};

token COMPILER_INFASTRUCTURE_PUBLIC new_token(char s, operand o);
#ifndef __minisql_interpreter_h__
#define __minisql_interpreter_h__

#include "API.h"

class Interpreter {
   private:
    API *api;

   public:
    void init(API *a);
};

#endif
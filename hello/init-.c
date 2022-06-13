#include "include/euphoria.h"
#include "main-.h"

object _5;
object _8;

// 0x55C761E4
// Declaring file vars


struct routine_list _00[] = {
  {"", 0, 999999999, 0, 0, 0, 0}
};

char ** _02;
object _0switches;
struct ns_list _01[] = {
  {"eu", 0, 0, 1},
  {"", 0, 999999999, 0}
};

void init_literal()
{
    extern char *string_ptr;
    extern double sqrt();
    setran(); /* initialize random generator seeds */
    _8 = NewString("Hello World\n");
    _5 = NewString("");
}

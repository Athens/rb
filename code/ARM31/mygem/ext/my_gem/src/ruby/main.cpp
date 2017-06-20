
#include <ruby.h>

typedef VALUE (*RUBY_FUNCTION)(ANYARGS);

void _Init_Calculator();

extern "C"
{
  void Init_my_gem(void)
  {
    _Init_Calculator();
  }
}

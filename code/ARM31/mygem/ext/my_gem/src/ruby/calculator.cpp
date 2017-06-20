
#include <ruby.h>
#include <calculator.h>

static void calculator_free(void* calc)
{
  if(calc)
  {
    Calculator *_calc = (Calculator*)calc;
    delete _calc;
  }
}

static VALUE calculator_init(VALUE cls, VALUE times)
{
  double _times = NUM2DBL(times);
  Calculator* _calculator = new Calculator(_times);
  return Data_Wrap_Struct(cls, 0, calculator_free, _calculator);
}


static VALUE calculator_calculate(VALUE self, VALUE value)
{
  Calculator *calc = NULL;
  Data_Get_Struct(self, Calculator, calc);

  double _value = NUM2DBL(value);

  double result = calc->calculate(_value);

  return DBL2NUM(result);
}

void _Init_Calculator()
{
    VALUE module = rb_const_get(rb_cObject, rb_intern("MyGem"));
    VALUE cCalculator = rb_const_get(module, rb_intern("Calculator"));
    rb_define_singleton_method(cCalculator, "new", (VALUE (*)(...)) calculator_init, 1);
    rb_define_method(cCalculator, "_calculate", (VALUE (*)(...)) calculator_calculate, 1);
}

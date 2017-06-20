
require 'mkmf'

$CPPFLAGS += ' -I include/'

$objs = ['src/calculator.o',
         'src/ruby/calculator.o',
         'src/ruby/main.o']

create_makefile 'my_gem/my_gem'

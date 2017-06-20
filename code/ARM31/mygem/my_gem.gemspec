
Gem::Specification.new do |s|
  s.name        = 'my_gem'
  s.version     = '0.1'
  s.date        = '2017-06-15'
  s.summary     = 'My best gem'
  s.description = 'This is a great gem'
  s.authors     = ['Athens Ruby Meetup']
  s.files       = ['lib/my_gem.rb',
                   'lib/my_gem/calculator.rb',
                   'ext/my_gem/include/calculator.h',
                   'ext/my_gem/src/calculator.cpp',
                   'ext/my_gem/src/ruby/main.cpp',
                   'ext/my_gem/src/ruby/calculator.cpp']
  s.extensions = ['ext/my_gem/extconf.rb']
end

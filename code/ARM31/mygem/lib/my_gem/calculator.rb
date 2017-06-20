
class Calculator

  def calculate(x)
    [x].flatten.collect { |e| self._calculate(e) }
  end

end

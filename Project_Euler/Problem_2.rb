store = Array.new
a = 0
b = 1
c = a + b
while (c <= 4000000 ) do
  store << c
  a = b
  b = c
  puts c
  c = a + b
end
sum = 0
store.each do |x|
  if x.even?
    sum = sum + x
  end
end
print "Sum of the series is #{sum} "

# Sum of the series is 4613732
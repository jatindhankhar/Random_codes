t = gets.to_i
t.times do
equation = gets.chomp
stack = []
output = ''
equation.each_byte do |c|
if c >= 97 && c <= 122 then output << c
elsif c == 41 then output << stack.pop
elsif c == 40 then nil
else stack.push(c)
end
end
puts output
end
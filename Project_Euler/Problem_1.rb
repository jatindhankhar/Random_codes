sum = 0
(1...1000).each do |i|
 if ( i % 3 == 0 and i%5 != 0)
  puts i
  sum = sum + i
else if ( i % 5 ==0 and i%3 !=0)
  puts i
  sum = sum + i
else 
  end
end
end
puts "The sum is #{sum}"

# The sum is 200003
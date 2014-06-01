t = gets.chomp.to_i
count = 0
t.times do
 num1=gets.chomp
 num2=gets.chomp
 (num1..num2).each do |digit|
   if digit == digit.reverse
     count+=1
   end
 end
 puts count
 count = 0
end

## Submitted solution was like this


=begin
count = 0
t = gets.chomp
t.times do
 num1 = gets.chomp
 num2 = gets.chomp
 (num1..num2).each do |digit|
  if digit == digit.reverse
   count+=1
   end
  end
  puts count
 end
=end

##
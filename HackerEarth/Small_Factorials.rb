t = gets.chomp.to_i
hold = 1
t.times do
num = gets.chomp.to_i
(1..num).to_a.each do |i|
 hold = hold * i
end
puts hold
hold = 1
end

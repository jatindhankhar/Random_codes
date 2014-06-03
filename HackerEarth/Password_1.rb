=begin

=end

t = gets.chomp.to_i
arr = []
t.times do
 arr << gets.chomp
end

(0..arr.length-1).each do |i|
  v = arr[i].reverse
  ind = v.length/2
  if (arr.include?(v))
  print "#{v.length} "
  puts v[ind].chr
  break
 end
end

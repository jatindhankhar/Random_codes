arr = [6,2,5,5,4,5,6,3,7,6]
str = gets.chomp
result = 0
str.each_char{ |x| result = result + arr[x.to_i] }
print result 

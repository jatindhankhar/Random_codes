def max_price(price,len)
	return 0 if len.zero?
   max_val = -(Float::INFINITY)
   (0...len).each do |i|
    max_val = [max_val,price[i]+max_price(price,len-i-1)].max
   end
return max_val;
end
price = [1,5,8,9,10,17,17,20]
puts max_price(price,8)
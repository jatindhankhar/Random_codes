arr = [1,-98,56,89,0]
(0..arr.length-1).each do |x|
      j = x
      while(j > 0 and (arr[j-1] > arr[j]))
	      arr[j-1],arr[j] = arr[j],arr[j-1]
	      j = j.pred
      end
end

puts arr

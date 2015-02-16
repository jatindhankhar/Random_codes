$arr = Array.new 
def fib_dp(num)
	if $arr[num].nil?
		if num < 2
		  $arr[num] = num
	        else
		  $arr[num] = fib_dp(num-1) + fib_dp(num-2)
		end
		
	end
   return $arr[num]

end

def fib_rec(num)
	if num < 2 
		return num
	else
		return fib_rec(num-1) + fib_rec(num-2)
	end
	
end
def fib_dp_tabula(num)
	arr = Array.new num+1
	arr[0] = 0
	arr [1] = 1
	2.upto(num) do |i|
		arr[i] = arr[i-1] + arr[i-2]
	end
	return arr[num];
end
puts fib_dp 78
puts fib_dp_tabula 78
puts fib_rec 78
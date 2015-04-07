def merge_sort(arr)
	if arr.length <=1
		then return arr
	end
  second_array = arr.slice!((arr.length/2)..arr.length)
  
  first_arr = merge_sort(arr)
  second_array = merge_sort(second_array)
  
  return merge(first_arr,second_array)

end

def merge(left,right)
	return left if right.empty?
	return right if left.empty?
	
	if left.first <= right.first
		element = left.shift
	else
	
		element = right.shift
	end
 return [element] + merge(left,right)
end

arr = [456,346,3456,53,45654565,445,0,98]
arr = merge_sort arr
puts arr
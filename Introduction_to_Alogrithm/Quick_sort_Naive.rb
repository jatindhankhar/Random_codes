def quicksort(arr)
	return arr if arr.size <2
	smaller,bigger,pivotlist = [],[],[]
	pivot = arr.sample
	arr.each do |x|
	  smaller << x if x < pivot
	  bigger << x if x > pivot
	  pivotlist << x if x == pivot
	end
	smaller = quicksort smaller
	bigger = quicksort bigger
	return smaller + pivotlist + bigger
end

p quicksort [19, 17, 16, 12, 9, 15, 1, 2, 11, 7, 3, 10, 14]
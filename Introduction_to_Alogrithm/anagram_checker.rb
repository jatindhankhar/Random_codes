require 'benchmark'
def anangram?(a,b)
	return false if a.length != b.length
	 freq_a = Hash.new 0
	 freq_b = Hash.new 0
	 a.chars { |ch| freq_a[ch] += 1}
	 b.chars { |ch| freq_b[ch] += 1}
	 if freq_a == freq_b
		 return true
          else
	      return false
	 end
	
end


Benchmark.bm do |bm|
	bm.report { puts anangram?("tea","eat") ? " Yes" : "No" }
end
# CS325-Group-Assignment-One
# Description of the algorithms
Your three algorithms are to be based on these ideas:
# Algorithm 1:
EnumerationLoop over each pair of indicesi≤jand compute the sum,∑jk=ia[k].  Keepthe best sum you have found so far.
# Algorithm 2: 
Better EnumerationNotice that in the previous algorithm,  the same sum is computedmany times.  In particular, notice that∑jk=ia[k] can be computed from∑j−1k=ia[k] inO(1) time, ratherthan starting from scratch.  Write a new version of the first algorithm that takes advantage of thisobservation.
# Algorithm 3: 
Dynamic ProgrammingYour dynamic programming algorithm should be based on thefollowing idea:•The maximum subarray either uses the last element in the input array, or it doesn’t.Describe the solution to the maximum subarray problem recursively and mathematically based on theabove idea. See pages 8-13 ofhttps://web.engr.oregonstate.edu/~glencora/wiki/uploads/max-subarray.pdffor more details on these algorithms

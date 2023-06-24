##**Program to generate Pascal’s Triangle**

Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

In this case, we are given the row number r and the column number c, and we need to find out the element at position (r,c). 

	We can optimize this calculation by the following observation. 
	Assume, given r = 7, c = 4. 
	Now, n = r-1 = 7-1 = 6 and r = c-1 = 4-1 = 3
	Let’s calculate 6C3 = 6! / (3! *(6-3)!) = (6*5*4*3*2*1) / ((3*2*1)*(3*2*1))
	This will boil down to (6*5*4) / (3*2*1)

 

Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

	Current element = prevElement * (rowNumber - colIndex) / colIndex


Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

	Using variation 2 we create each row
// ================================================================================================
// Chapter 12 Exercises
// ================================================================================================

// ================================================================================================
// (1) Suppose that the following declarations are in effect:
// int a[] = { 5, 15, 34, 54, 14, 2, 52, 72 };
// int *p = &a[1], *q = &a[5];
//
// (a) What is the value of *(p + 3)?
// (b) What is the value of *(q - 3)?
// (c) What is the value of q - p?
// (d) Is the condition P < q true or false?
// (e) Is the condition *p < *q true or false?
// ================================================================================================

// ================================================================================================
// (2) Suppose that high, low, and middle are all pointer variables of the same type, and that low
// and high point to elements of an array. Why is the following statement illegal, and how could it
// be fixed?
// middle = (low + high) / 2;
// ================================================================================================

// ================================================================================================
// (3) What will be the contents of the array a after the following statements are executed?
// 
// #define N 10
//
// int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
// int *p = &a[0], *q = &a[N - 1], temp;
//
// while (p < q)
// {
//      temp = *p;
//      *p++ = *q;
//      *q-- = temp;
// }
// ================================================================================================

// ================================================================================================
// (4) Rewrite the make_empty(), is_empty(), and is_full() functions of section 10.2 to use the
// pointer variable top_ptr instead of the integer variable top.
// ================================================================================================

// ================================================================================================
// (5) Suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the
// assignment p = a has just been performed, which of the following expressions are illegal becasue
// of mismatched types? Of the remaining expressions, which are true (have a nonzero value)?
//
// (a) p == a[0];
// (b) p == &a[0];
// (c) *p == a[0];
// (d) p[0] == a[0];
// ================================================================================================

// ================================================================================================
// (6) Rewrite the following function to use pointer arithmetic intead of array subscripting. (In
// other words, eliminate the variable i and all uses of the [] operator.) Make as few changes as
// possible.
//
// int sum_array(const int a[], int n)
// {
//      int i, sum;
//
//      sum = 0;
//      for (i = 0; i < n; i++)
//          sum += a[i];
//
//      return sum;
// }
// ================================================================================================

// ================================================================================================
// (7) Write the following function:
// 
// bool search(const int[], int n, int key);
//
// a is an array to be searched, n is the number of elements in the array, and key is the search
// key. search() should return true if key matches some element of a, and false if it doesn't. Use
// pointer arithmetic, not subscripting, to visit array elements.
// ================================================================================================

// ================================================================================================
// (8) Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
// other words, eliminate the variable i and all uses of the [] operator.) Make as few changes as
// possible.
//
// void store_zeros(int a[], int n)
// {
//      int i;
//
//      for (i = 0; i < n; i++)
//          a[i] = 0;
// }
// ================================================================================================

// ================================================================================================
// (9) Write the following function:
//
// double inner_product(const double *a, const double *b, int n);
//
// a and b both point to arrays of length n, The function should return:
// a[0] * b[0] + a[1] * b[1] + ... + a[n - 1] * b[n - 1]
// Use pointer arithmetic, not array subscripting, to visit array elements.
// ================================================================================================

// ================================================================================================
// (10) Modify the find_middle() function of section 11.5 so that it uses pointer arithmetic to
// calculate the return value.
// ================================================================================================

// ================================================================================================
// (11) Modify the find_largest() function so that it uses pointer arithmetic.
// ================================================================================================

// ================================================================================================
// (12) Write the following function:
//
// void find_two_largest(const int *a, int n, int *largest, int *second_largest);
//
// a points to an array of length n. The function searches the array for its largest and second
// largest elements, storing them in the variables pointed to by largest and second_largest,
// respectively. Use pointer arithmetic.
// ================================================================================================

// ================================================================================================
// (13) Section 8.2 had a program fragment in which two nested for loops initialized the array
// ident for use as an identity matrix. Rewrite the code, using a single pointer to step through
// the array one element at a time. Hint: the first element of the array should be 1...
// ================================================================================================

// ================================================================================================
// (14) Assume that the following array contains a week's worth of hourly temperature readings,
// with each row containing the readings for one day:
// int temperatures[7][24];
// Write a statement that uses the search function from exercise 7 to search the entire
// temperatures array for the value 32.
// ================================================================================================

// ================================================================================================
// (15) Write a loop that prints all temperature readings stored in row i of the temperatures array
// from exercise 14. Use a pointer to visit each element of the row.
// ================================================================================================

// ================================================================================================
// (16) Write a loop that prints the highest temperature in the temperature array from exercise 14
// for each day of the week. The loop body should call the find_largest() function, passing it one
// row of the array at a time.
// ================================================================================================

// ================================================================================================
// (17) Rewrite the following function to use pointer arithmetic instead of array subscripting. Use
// a single loop instad of nested loops.
//
// int sum_two_dimen_array(const int a[][LEN], int n)
// {
//      int i, j, sum = 0;
//
//      for (i = 0; i < n; i++)
//          for (j = 0; j < LEN; j++)
//              sum += a[i][j];
//
//      return sum;
// }
// ================================================================================================

// ================================================================================================
// (18) Write the evaluate_position() function from exercise 13 in chapter 9 using pointer
// arithmetic, and a single loop instead of nested loops.
// ================================================================================================

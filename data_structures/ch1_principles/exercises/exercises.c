// =============================================================================
// Data Structures and Program Design
// Chapter 1: Programming Principles - Exercises
// 07/10/26
// =============================================================================
// (1) Rewite the following program so that is accomplishes the same result in a
// less tricky way.
//
// void does_something(int *first, int *second)
// {
//      *first = *second - *first;
//      *second = *second - *first;
//      *first = *second + *first;
// }

void does_something(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

// =============================================================================

// =============================================================================
// (2) Determine what each of the following functions does, rewrite each
// function with meaningful variable names, with better format, and without
// unnecessary variables and statements.
// -----------------------------------------------------------------------------
// (a) -------------------------------------------------------------------------
// #define MAXINT 10
// int calculate(int apple, int orange)
// { int peach, lemon;
// peach = 0; lemon = 0; if (apple < orange) {
// peach = orange; } else if (orange <= apple) {
// peach = apple; } else { peach = MAXINT; } lemon = MAXINT;
// } if (lemon != MAXINT) { return(peach); } }
//
// This function assigns a local int variable to the larger of two input ints
// the else case is impossible to reach, the function will always return
// the value of whichever is larger.

// This function returns the larger of two integers, or the first if equal.
int get_largest(int first, int second)
{
     return (second <= first) ? first : second;
}

// -----------------------------------------------------------------------------
// (b) -------------------------------------------------------------------------
// double figure(double vector1[], int n)
// { int loop1; double loop2; double loop3; int loop4;
// loop1 = 0; loop2 = vector1[loop1]; loop3 = 0.0;
// loop4 = loop1; for (loop4 = 0; loop4 < n; loop4 = loop4 + 1)
// { loop1 = loop1 + 1; loop2 = vector[loop1 - 1];
// loop3 = loop2 + loop3; } loop2 = loop1;
// loop2 = loop3 / loop2; return(loop2); }

// This function divides the sum of its elements by the last element
double weighted_average(double vec[], int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += vec[i];
    }

    return sum / vec[n - 1];
}

// -----------------------------------------------------------------------------
// (c) -------------------------------------------------------------------------
// void question(int *a17, int *stuff)
// { int another, yetanother, stillonemore;
// another = yetanother; stilloemore = *a17;
// yetanother = *stuff; another = stillonmore; *a17 = yetanother;
// stillonemore = yetanother;
// *stuff = another; another = yetanother; yetanother = *stuff }

// this function switches two numbers
void switch_numbers(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

// -----------------------------------------------------------------------------
// (d) -------------------------------------------------------------------------
// int mystery(int apple, int orange, int peach)
// { if (apple > orange) if (apple > peach) if
// (peach > orange) return(peach); else if (apple < orange)
// return(apple); else return(orange); else return(apple); else
// if (peach > apple) if (peach > orange) return orange; else
// return(peach); else return(apple); }

int mystery(int apple, int orange, int peach)
{
    if (apple > orange)
        if (apple > peach)
            if (peach > orange)
                return peach;
            else if (apple < orange)
                return apple;
            else return orange;
        else return apple;
    else if (peach > apple)
        if (peach > orange)
            return orange;
        else return peach;
    else return apple;
}
// -----------------------------------------------------------------------------
// =============================================================================

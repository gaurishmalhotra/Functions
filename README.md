# Call-by-value
## EXPERIMENT 10

## Aim:
To perform call by value function 

## Apparatus:
VS Code

## Theory
## PASS BY VALUE 
Pass by Value is a method of argument passing in programming where a function receives a copy of the argument's value which means that any changes made to the parameter inside the function do not affect the original variable outside the function.


## PASS BY REFRENCE
Pass by Reference is a method of argument passing where a function receives a reference to the actual argument that means that the function operates directly on the original data, and changes made to the parameter inside the function will affect the original variable.


## Algorithms
### Call by reference

1. **Start**
2. **Define Function `swap(int *x, int *y)`**
   - **Input:** Pointers to two integers `x` and `y`
   - **Output:** Swapped values of the integers pointed to by `x` and `y`
   - **Steps:**
     1. Make a temporary variable `temp`
     2. Assign the value pointed to by `x` to `temp` (`temp = *x`)
     3. Assign the value pointed to by `y` to the location pointed to by `x` (`*x = *y`)
     4. Assign the value of `temp` to the location pointed to by `y` (`*y = temp`)
3. **In `main` Function**
   - Define integers `a` and `b` with 5 and 2.
   - Call `swap(&a, &b)` function
   - Print the value of `a`
   - Print the value of `b`
4. **End**


### Call by value

1. **Start**
2. **Define Function `swap(int x, int y)`**
   - **Input:** Two integers `x` and `y`
   - **Output:** Swapped values of `x` and `y`
   - **Inside Swap function:**
     1. Create a temporary variable `temp`
     2. Assign the value of `x` to `temp`
     3. Assign the value of `y` to `x`
     4. Assign the value of `temp` to `y`
3. **Inside `main` Function**
   - Define two integers `a` and `b` with 5 and 2
   - Call `swap(a, b)`
   - Print the value of `a`
   - Print the value of `b`
4. **End**




## Conclusion
In this experiment we learned call by value function

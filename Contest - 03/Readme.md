## Problem - A(Weird Algorithm) : 
  - This Problem is for testing your recusion implementation skill
  - this is also solve without recursion
  - <details>  Goal : Recursive Solution </details>

## Problem - B(Redirect URL) : 
  - This Problem is very easy catagory string implementation problem
  - Just print `https` when testcase contains `http` and reamin are same
  - <details> Goal : learn and recap some builtin function of string : find(), rbegin(), rend(), substr() </details>

## Problem - C(Missing Number) : 
  - This is easy Xor trick problem
  - we know that `X ^ X = 0`
  - Just Xor `(1 - N)` then Xor with `n - 1` input element then we get reamin element
  - <details> Goal : Xor trick, Math (sum of `n` natural numbers), maping, hashing </details>

## Problem - D(Minimum Arc Distance) : 
 - Simple geometry Problem
 - Think how can you determine arc distance
     - if `S` is arc distance/length then, `S = r * θ`
     - determine radius `r` from `O(x,y) and A(x,y) or B(x,y)` distance as `r = √((x1 - x2)^2 + (y1-y2)^2)`
     - Now time to determine the angle
         - let A(x, y) and B(x, y) are two vector
         - try to use `Law of Cosine`
         - This law is `AB^2 = OA^2 + OB^2 − 2*OA*OB*cos(θ)`
         - what is `θ = ?`
 - Now we have radius `r` and angle `θ`
 - so `S = ?`

## Problem - E(Repetitions) : 
  - Tracking and count is adjacent element is equal
  - otherwise put the pointer to current index so `cnt = 1`
  - <details> Goal : Solmple two Pointer Appraoch </details>


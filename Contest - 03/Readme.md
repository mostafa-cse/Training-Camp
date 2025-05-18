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

### Solution - 01 (using Cosin laws) : 
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

### Solution - 02(Dot Product) : 
  - Same tricks for determine the radius
  - Using dot produt for determine angle, `θ = ?`;
    - **A.B** = Ax * Bx + Ay * By
    - using cosine formula, **A.B** = |A||B| cosθ
    - deterine, θ = arccos(**A.B** / |A||B|)
   - Now we have radius `r` and angle `θ`
   - so `S = ?`
   -  <details> Goal : vector, how/when it works?</details>
## Problem - E(Repetitions) : 
  - Tracking and count is adjacent element is equal
  - otherwise put the pointer to current index so `cnt = 1`
  - <details> Goal : Solmple two Pointer Appraoch </details>

## Problem - F(February 29) : 
  - Given two date
  - You have to determine number of leap year lies between date
      - Simple PIE(Principle of Inclusion–Exclusion) formula
      - Just Implement the Leap Year Formula
          - if number is divisible by 400
          - if number is divisible by 4 but not divisible by 100
          - This formula  = `[(Y / 4) - (Y / 100)] + (Y / 100)`
          - thus simplify version on code.
  - <details> Goals : Principle of Inclusion–Exclusion </details>


## Problem - G(Increasing Array) : 
  - Simple adjacent difference sum of  an array
  - sum + update
  - <details> Goal : tracking Priveous number by update </details>

## Problem - H(IP Checking) : 
  - Simple string manupulation problem
  - Base convertion
  - <details> Goal : string Split : istringstream, base conversion using builtin function : stoi () </details>

## Problem - I(I - Permutations) : 
  - This is Constructive Problem
  - Try to determine when `No Solution`
  - use Testcase as `3, 5, 6, 10`
  - You get a sequence as even then odd
  - <details> Goals : determine sequence of a Problem, construct answer using output.</details>

## Problem - J(Array Simulation) : 
  - This is Pure Bruteforces Problem
  - just iterate this query according to the input
  - <details>Goal : Bruteforces</details>

The cows have been making movies lately, so they are ready to play a variant of the famous game "Six Degrees of Kevin Bacon".      

The game works like this: each cow is considered to be zero degrees of separation (degrees) away from herself. If two distinct cows have been in a movie together, each is considered to be one 'degree' away from the other. If a two cows have never worked together but have both worked with a third cow, they are considered to be two 'degrees' away from each other (counted as: one degree to the cow they've worked with and one more to the other cow). This scales to the general case.      

The N (2 ≤ N ≤ 300) cows are interested in figuring out which cow has the smallest average degree of separation from all the other cows. excluding herself of course. The cows have made M (1 ≤ M ≤ 10000) movies and it is guaranteed that some relationship path exists between every pair of cows.   

### Input  
Line 1: Two space-separated integers: N and M.

Lines 2: M+1: Each input line contains a set of two or more space-separated integers that describes the cows appearing in a single movie. The first integer is the number of cows participating in the described movie, (e.g., Mi); the subsequent Mi integers tell which cows were.

### Output
Line 1: A single integer that is 100 times the shortest mean degree of separation of any of the cows.

### Sample
| Input | Output |
| -------- | -------- |
|4 2<br>3 1 2 3<br>2 3 4|100|

### Hint
[Cow 3 has worked with all the other cows and thus has degrees of separation: 1, 1, and 1 -- a mean of 1.00 .]

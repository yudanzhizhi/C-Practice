Farmer John purchased satellite photos of W x H pixels of his farm (1 ≤ W ≤ 80, 1 ≤ H ≤ 1000) and wishes to determine the largest 'contiguous' (connected) pasture. Pastures are contiguous when any pair of pixels in a pasture can be connected by traversing adjacent vertical or horizontal pixels that are part of the pasture. (It is easy to create pastures with very strange shapes, even circles that surround other circles.)

Each photo has been digitally enhanced to show pasture area as an asterisk ('*') and non-pasture area as a period ('.'). Here is a 10 x 5 sample satellite photo:  

\.\.\*\.\.\.\.\.\*\*    
\.\*\*\.\.\*\*\*\*\*    
\.\*\.\.\.\*\.\.\.\.    
\.\.\*\*\*\*\.\*\*\*     
\.\.\*\*\*\*\.\*\*\*    
	
	
This photo shows three contiguous pastures of 4, 16, and 6 pixels. Help FJ find the largest contiguous pasture in each of his satellite photos.    

### Input  
Line 1: Two space-separated integers: W and H

Lines 2: H+1: Each line contains W "*" or "." characters representing one raster line of a satellite photograph.

### Output
Line 1: The size of the largest contiguous field in the satellite photo.

### Sample
| Input | Output |
| -------- | -------- |
|10 5<br>\.\.\*\.\.\.\.\.\*\*<br>\.\*\*\.\.\*\*\*\*\*<br>\.\*\.\.\.\*\.\.\.\.<br>\.\.\*\*\*\*\.\*\*\*<br>\.\.\*\*\*\*\.\*\*\*|16|

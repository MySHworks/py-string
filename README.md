# py-string
A string function dynamic linking library that borrows from Python's method 
## introduction
Py_string is a String handling function written in C based on the ways strings are handled in python and made into a dynamic linking library.You can implement some python functions in C.
The functions are as follows：
| name             |description                                                         |
|------------      |-------------------                                                |
|capitalize()      |capitalize the first character of the string                        |
|center(width)     |returns a new string centered on the original string and filled with spaces to the length width| .
|find(str,beg=0.end=len(string))|detect the required str in the specified range beg to end if the str exists return the starting index value of its position,otherwise returns -1|
|join(seq)         | merges all the elements in seq into a new,using string as a delimiter|
|max(str)          |returns the largest letter in the string str|
|min(str)          |returns the smallest letter in thr str|
|replace(str1,str2,num)|replace str1 in string with str2,no more than num if num is specified|
|split(str,num)    |slice a string with str as the delimiter,separating only the num substring if num has a specified value|
|strip()           |execute lstrip() and rstrip() on string|
|upper()           |converts lowercase letters in a string to uppercase|
|zfill(width)      |returns a string of length width,right aligned with the original string,preceded by space|
|length()          |returns the length of the string|

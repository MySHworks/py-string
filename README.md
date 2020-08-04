# Py-string
A string function dynamic linking library that borrows from Python's method 

## Introduction
Py_string is a String handling function written in C based on the ways strings are handled in python and made into a dynamic linking library.You can implement some python functions in C.
The functions are as follows：
| __name__             |__description__                                                         |
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

The Linux system is stable, powerful, and easy to obtain. It is favored by most programmers. Create a dynamic link library for c string processing under the Linux system. When you want to use a function, link this dynamic link library.

The dynamic library is independent of the executable program and can be accessed quickly to optimize project management. The use of dynamic link library can save memory, and only use the same dynamic link library when running multiple applications at the same time, which reduces the dynamic exchange of files; secondly, the dynamic library can be updated at any time, as long as the application functions, variables and return values are written.The type and number of DLLs remain unchanged, and the functions in the dynamic link library can be used directly without recompiling and linking.

----
## Feature
- Use the python method to write C functions: python has rich functions for string processing and easy to use.
- Dynamic link library: independent of the executable program, it can be accessed quickly, optimize the management of the written function, save memory, and can be updated at any time.

----
## Pre-Requisites
- linux and vim
- the string function in python

----
## Usage
- compile:`gcc main.c -L. -ltest -o test`
- run: `$./test`
- If you cannot find the dynamic library, you should pay attention to setting the LD_LIBRARY_PATH environment variable before executing the implicitly linked program, or copy the libtest.so generated earlier to the system path.
	$./test
	./test: error while loading shared libraries: libtest.so: cannot open shared object file: No such file or directory
	$export LD_LIBRARY_PATH=.
	
----
## Achievement
- The introduction to python string function set: < https://www.runoob.com/python/python-strings.html>
- Detailed explanation of compiling and using dynamic link library under Linux: <https://blog.csdn.net/zhangpower1993/article/details/52192434>
- Under Linux, gcc compile and generate dynamic link library *.so file and call it: <http://blog.sina.com.cn/s/blog_54f82cc20101153x.html>

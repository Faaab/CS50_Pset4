# CS50_Pset4
Problem set 4 of CS50's Introduction to Computer Science consists of three programs.

1. Whodunit
The goal of this program is to find the clue hidden in the 'clue.bmp' image provided by the CS50 staff.
This program takes two command-line arguments: the name of an input file and the name of an output file.
It creates an output file, and copies each pixel in the input file to the output file, turning each pixel with maximum red value pure black.
The result of running this program on clue.bmp can be seen in revel.bmp
NB: Much of the code for this excercise was provided by the CS50 staff. Only the code in whodunit.c is my own.

2. Resize
This program resizes a provided 24-bit uncompressed BMP-file by a factor of n, where n is an integer.
It takes three command line inputs: 
A positive integer less than or equal to 100 (the resize factor)
The name of the input file
The name of the output file
NB: Only the code in resize.c is my own, the rest was provided by CS50 staff.

3. Recover
This program takes a forensic image (RAW-file, like the provided 'card.raw') and extracts JPEG images from it.
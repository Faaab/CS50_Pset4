# Questions

## What's `stdint.h`?

A library that defines integer types that have the same exact size across all devices.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

uint8_t gives the user 1 byte, that can store any value between 0 and 255 (inc).
uint32_t gives the user 4 bytes, tthat can store any value between 0 and 4294967295 (inc).
int32_t gives the user 4 bytes, that can store any value between –2147483648 and 2147483647.
uint16_t gives the user 2 bytes, that can store any value between 0 and 65535.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1, 4, 4, 2

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

ASCII: BM
Hexadecimal: 0x42 0x 4D

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the whole bitmap file
biSize is the size of the struct BITMAPINFOHEADER

## What does it mean if `biHeight` is negative?

That the first BGR pixel in the file represents the top left pixel.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

Because the computer could not allocate memory for the file. A reason for this could be that the memory is full.

## Why is the third argument to `fread` always `1` in our code?

What we want 'fread' to do here is read a block of data from storage and store it in memory. Both times the 'fread' function is used
in copy.c, the exact size of the block of data that needs to be read and stored is defined in the second variable passed to the function.
So to read the needed block of data, a block of data of that size should be read 1 time.

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

It moves the pointer to the file copy is reading from. In this case, fseek is used to skip over the padding in the original file.

## What is `SEEK_CUR`?

SEEK_CUR is the current position of the file pointer.

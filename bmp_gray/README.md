# BMP RGB-to-Grayscale Converter (in 413 bytes)

An extremely shortened / unreadable version of this code: https://github.com/violeta-desantis/BMP-RGB-to-Grayscale

The original program was a total of 8303 bytes between the .c and .h files.

In this version, all error checking, good practice, comments, and readability have been thrown out the window in pursuit of minimizing byte count.

Like the original, this version requires 24-bit color depth, the BITMAPINFOHEADER type, and no file compression.

However, all error checking code has been removed to minimize byte count - so if the provided file is not in the proper format this will almost certainly segfault.
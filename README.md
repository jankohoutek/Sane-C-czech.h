# Č (Čéčko) / Č++ (Čépépé) ythe SANE version

The czech library for C (and C++). Why? Because we could, of course! 
But this fork make it really usable for coding and usaable for learning.

Please contribute your other sane translations. This is cherrypicking from
the original sources, so that we can write a fully czech code.

## Using

This project resides solely in a single header file, aptly named `czech.h`.
Download that file alone, or along this whole repository, and then, after
including it in your source files like you would with any other header, you
will be fully set up! (Just make sure you use relatively modern compiler)

We have this project tested and provably working with
[Clang](http://releases.llvm.org/download.html), but newer versions of gcc
are also known to work, as well as some other compilers.

## Integrated transpiler
For testing, we also provide C to Č and reverse transpiler in the file
`translate.py`. Launch it with `./translate.py to czech.h path/to/your/C/file.c path/to/new/Č/file.č`

## Obligatory "Hello World" example

```c
#include "czech.h"
#include <stdio.h>

číslo hlavní(prázdno)
{
    položř("Ahoj, světe!");
    vrať 0;
}
```

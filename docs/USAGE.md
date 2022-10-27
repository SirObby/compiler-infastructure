# USAGE

This document describes how to use compiler-infastructure.

## Beginning

To use compiler-infastructure, include the `<compiler_infastructure.h>` header.
```c
#include <compiler_infastructure.h>
```

After including the header you need to create a **compiler** struct.
```c
--- main function
compiler c;
bool success = start_compiler(c);
```
success will return **true** if the compiler was created successfully.
[![Version: 1.0 Release](https://img.shields.io/badge/Version-1.0%20Release-green.svg)](https://github.com/0x007e/core_types-numeric) ![Build](https://github.com/0x007e/core_types-numeric/actions/workflows/release.yml/badge.svg) [![License GPLv3](https://img.shields.io/badge/License-GPLv3-lightgrey)](https://www.gnu.org/licenses/gpl-3.0.html)

# `Core Type Graphics Headers`

[![Ask DeepWiki](https://deepwiki.com/badge.svg)](https://deepwiki.com/0x007E/core_types-numeric)

These core type `numeric` header(s) serve as a general structure for `c` abstraction libraries, serving to these (interchangeable) libraries as common data types.

## File Structure

```
core_types/
└── numeric/
    ├── datatypes.h
    └── radix.h
```

> The headers are completely platform independent and can be usesd across a wide range of c-compilers.

## Downloads

The header(s) can be downloaded (`zip` or `tar`), cloned or used as submodule in a project.

| Type      | File               | Description              |
|:---------:|:------------------:|:-------------------------|
| Library   | [zip](https://github.com/0x007E/core_types-numeric/releases/latest/download/library.zip) / [tar](https://github.com/0x007E/core_types-numeric/releases/latest/download/library.tar.gz) | Basic `numeric` library |

### Using with `git clone`

```sh
mkdir -p ./core_types
git clone https://github.com/0x007E/core_types-numeric.git    ./core_types
mv ./hal/core_types-numeric ./core_types/numeric
```

### Using as `git submodule`

```sh
git submodule add https://github.com/0x007E/core_types-numeric.git    ./core_types/numeric
```

## Programming

```c
#include "../lib/core_types/numeric/datatypes.h"
#include "../lib/core_types/numeric/radix.h"

int main(void)
{
    NUMERIC_Type numeric;

    numeric = NUMERIC_Unsigned_Int;
    numeric = NUMERIC_Unsigned_Long;
    numeric = NUMERIC_Signed_Int;
    numeric = NUMERIC_Signed_Long;
    numeric = NUMERIC_Float;
    numeric = NUMERIC_Double;

    NUMERIC_Radix radix;

    radix = NUMERIC_Binary;
    radix = NUMERIC_Decimal;
    radix = NUMERIC_Hexadecimal;
}
```

---

R. GAECHTER

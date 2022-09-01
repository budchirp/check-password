# check-password

A small utility to check password that set via termux-auth package if true or false.

## Installation

#### Requirements

1. Clang (gcc)
2. CMake

#### Clone the repo

```sh
git clone https://github.com/CanKolay3499/check-password && cd check-password/
```

#### Compile the code

```sh
mkdir -p build/ && cd build/
cmake ../ && make -j$(nproc)
```

if you are on the fish shell remove the `$` sign.

#### Execute the `out`

```sh
./out
```

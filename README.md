# C++ Template

A minimal, ready-to-use C++ project template for fast setup and development. Depends on Nix and direnv for automated environment setup / dependency management.

## Usage
When creating your own C++ Project in Github you can use this repository as a template to get started quickly.

## Building
Building is done using a combination of both make and CMake.

Make targets are used as shorthand for verbose CMake commands. See the makefile for available targets.

> [!NOTE]
> Don't build with CMake directly, always use make.

```sh
make all
```

### Debug
```sh
make debug
```

# External pakcages installation

## Mac
On mac it's easy just install with `brew` e.g.
```bash
brew install libharu
```

and then link it to the project during building command with `gcc` like in `Makefile`

## Windows
On Windows it's much more complicated depending on what you use
1. Cmake by Visual Studio
2. Or gcc by MinGW (MSYS2)

Based on that you should use a pckage manager called `vcpkg` which kinda works, but I am not sure how it is linked yet.
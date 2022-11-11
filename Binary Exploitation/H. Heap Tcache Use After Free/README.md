Compile Command -

```diff
> gcc uaf.c -o uaf -no-pie
> patchelf --set-interpreter ./ld-2.27.so --set-rpath . ./uaf
```

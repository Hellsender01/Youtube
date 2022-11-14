Compile Command -

```diff
> gcc df.c -o df -no-pie
> patchelf --set-interpreter ./ld-2.27.so --set-rpath . ./df
```

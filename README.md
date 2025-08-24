# K&R

Me learning C.

## fish helper script

Use the ~/bin/kr helper to build-and-run.

```fish
#!/usr/bin/env fish

# k&r build and run

set --local filename $argv[1]
set --local basename (path basename --no-extension "$filename")
set --local dirname (path dirname "$filename")
mkdir -p "target/$dirname"
gcc -std=c89 $filename -o target/$dirname/$basename

./target/$dirname/$basename
```

## CLion IDE

_or_ use CLion to open the subdirectory and run it via the IDE there.

When creating a new project with CLion, create it as a C Executable with the C90 language standard.

# PF Fundamentals

My first-semester C programming journey. Each `.c` file is an original practice program; this repository organizes them by topic without changing the program code.

## Folder guide

- `01_fundamentals` — introductory C exercises: conditions, loops, calculations, and simple patterns.
- `02_arrays_and_searching` — arrays, sorting, merging, and search algorithms.
- `03_pointers` — pointer basics and pointer-based array exercises.
- `04_functions_and_strings` — user-defined functions and string operations.
- `05_recursion` — recursive solutions and recursion practice.
- `06_patterns` — star and shape pattern programs.
- `07_assignments` — semester assignments and lab work.
- `08_projects` — larger console programs and simulations.
- `09_practice_notes` — unit work, experiments, and early drafts kept for learning history.

## Run a program

From a program's folder:

```bash
gcc file_name.c -o program
./program
```

Programs that use functions from `math.h` may need `-lm`:

```bash
gcc file_name.c -o program -lm
./program
```
## Naming convention

Files use lowercase `snake_case`: words are separated with underscores, and every C program ends in `.c`.

## Suggested learning order

1. Start in `01_fundamentals` for syntax, conditions, loops, and calculations.
2. Continue with arrays, pointers, functions, and recursion in folders `02`–`05`.
3. Practice nested loops in `06_patterns`.
4. Explore `07_assignments` and `08_projects` to see larger first-semester programs.

The original beginner work is intentionally preserved, including drafts and experiments, so this repository shows the complete learning journey.
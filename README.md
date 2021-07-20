# SudokuSolver

A Sudoku Solving program developed for the Hive Helsinki Basecamp in 2021. 

To compile the program, run from the current directory:
```
gcc -Wall -Wextra -Werror -o solver ex00/*.c
```

The sudoku program reads each line of a sudoku as an argument as such:
```
./solver line0 line1 line2 line3 line4 line5 line6 line7 line8
```

To test an example of an intended sudoku, execute the following:
```
./sudoku "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e
```
And diff the results against the expected output in file testOutput.
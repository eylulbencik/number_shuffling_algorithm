# Number Shuffling Algorithm

A simple C implementation that rearranges the digits of an integer by alternately
selecting digits from the beginning and the end of the number.

## Example
Input: `123456`  
Output: `162534`

## How It Works
- The integer is converted to a string.
- Two pointers (`left` and `right`) traverse the string from both ends.
- Digits are picked alternately and stored in a new sequence.
- The result is converted back to an integer.

## Technical Notes
- Language: C
- Concepts used: two pointers, dynamic memory allocation, string manipulation

## Run
```bash
gcc numberShuffler.c -o shuffler
./shuffler

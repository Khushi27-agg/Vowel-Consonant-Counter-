# Vowel-Consonant-Counter-
Build a C++ program that counts the number of vowels and consonants in a given string while handling case sensitivity correctly.

# Why This Matters

Counting vowels and consonants is a foundational string-processing problem that strengthens:
character handling

condition logic

STL & standard library usage

This logic is widely used in text analysis, compilers, and input validation systems.

# Core Concepts Used

Strings in C++

ASCII character handling

tolower() for case normalization

isalpha() for valid character detection

Loops and conditional branching

Object-oriented programming

# Approach

Accept a string as input

Convert each character to lowercase

Check if the character is a vowel

If not a vowel but alphabetic, count it as a consonant

Ignore digits, spaces, and special characters

Display total vowel and consonant counts

# Implementation Highlights

Case-insensitive processing

Ignores non-alphabetic characters

Efficient single-loop traversal

Clean separation of logic using a class method

# Sample Input
Car

# Sample Output
Vowels: 1
Consonants: 2

# Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1)

# Concepts Practiced

String traversal

Character validation

Conditional logic

Method-based design

Memory-efficient processing

# Key Notes

Only alphabetic characters are counted

Program is case-insensitive


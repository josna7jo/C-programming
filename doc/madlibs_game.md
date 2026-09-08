# Mad Libs Game

## Description

Mad Libs is a simple C program that creates a funny story by taking different words from the user, such as nouns, verbs, and adjectives.

The program asks the user to enter words and then uses those words to create a story.

## Concepts Used

- Variables
- Data types
- `printf()`
- `fgets()`
- `scanf()`
- Strings
- `strlen()`
- String indexing
- Arithmetic operators
- User input

## How It Works

1. The program asks the user to enter a noun.
2. It asks for a verb.
3. It asks for three adjectives.
4. The entered words are stored in character arrays.
5. `fgets()` is used to read string input.
6. `strlen()` is used to find the length of the entered string.
7. The newline character (`\n`) added by `fgets()` is removed.
8. The program prints all the entered words as a funny story.

## Important Code
fgets(noun, sizeof(noun), stdin);
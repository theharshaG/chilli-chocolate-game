# Chilli Chocolate Game (C)

## Overview

This repository contains a simple console-based **Chilli Chocolate Game** developed in **C Programming**.

The game is designed for **two players** who play alternately by selecting chocolates. Players must carefully choose the number of chocolates because the player who leaves no chocolates for the opponent causes the opponent to receive the chilli and lose the game.

This project demonstrates:

* Conditional statements
* Loops and nested loops
* Input validation
* Game logic implementation
* User interaction using console input/output
* Basic problem-solving techniques

This project is useful for:

* Beginners learning C Programming
* Logic-building practice
* College mini projects
* Understanding loop control
* Console application development

---

## Game Rules

1. There are **15 chocolates** in total.
2. Two players play alternately.
3. A player can take only **1 to 3 chocolates** per turn.
4. Players cannot take more chocolates than available.
5. Invalid input repeats the same player's turn.
6. The player who receives the chilli loses the game.

---

## Features

* Two-player turn-based gameplay
* Input validation
* Prevents invalid moves
* Displays remaining chocolates
* Announces loser automatically
* Simple terminal interface

---

## Program Flow

```text
Start Game
    ↓
Show Instructions
    ↓
Player 1 Turn
    ↓
Validate Input
    ↓
Reduce Chocolates
    ↓
Player 2 Turn
    ↓
Validate Input
    ↓
Reduce Chocolates
    ↓
Repeat Until Chocolates Become Zero
    ↓
Declare Loser
```

---

## Example Output

```text
===== Chilli Chocolate Game =====

Instructions:

1. There are total 15 chocolates.
2. Two players play alternately.
3. Each player can take only 1 to 3 chocolates.
4. Invalid input repeats turn.

Player 1 (1-3): 2

Remaining chocolates: 13

Player 2 (1-3): 3

Remaining chocolates: 10

Player 1 (1-3): 2

Remaining chocolates: 8

Player 2 (1-3): 3

Remaining chocolates: 5

Player 1 (1-3): 2

Remaining chocolates: 3

Player 2 (1-3): 3

Player 1 gets chilli [LOST]
```

---

## Concepts Used

* Variables
* Loops (`while`)
* Nested loops
* Conditional statements (`if`)
* Input handling (`scanf`)
* Game development basics

---

## Technologies Used

* C Programming Language
* GCC Compiler
* VS Code
* CodeBlocks

---

## Project Structure

```text
chilli-chocolate-game/
│
├── chocochilli_game.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc chilli_chocolate_game.c -o game
```

Run:

```bash
./game
```

---

## Learning Outcomes

After completing this project, you will understand:

* Designing game logic
* Handling user inputs
* Input validation
* Nested loop execution
* Turn-based programming
* Building console applications

---

## Future Improvements

Possible future additions:

* Multiplayer mode
* Computer opponent
* Difficulty levels
* Score tracking
* Restart game option
* Dynamic chocolate count
* Better UI formatting

---

## Author

**Harsha G**

Learning:

* C Programming
* Data Structures
* Embedded Systems
* Embedded C
* Problem Solving

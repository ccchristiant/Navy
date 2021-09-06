## B2 - Unix System Programming

## B-PSU-200

# navy

## You sunk my battleship!
```
binary name : navy
repository name : PSU_navy_$ACADEMICYEAR
repository rights : ramassage-tek
language : C
compilation : via Makefile,i ncluding re, clean and fclean rules
```
- The totality of your source files, except all useless files (binary, temp files, obj files,...), must be included in your delivery.
- All the bonus files (including a potential specific Makefile) should be in a directory named _bonus_.
- Error messages have to be written on the error output, and the program should then exit with the 84 error code (0 if there is no error).

```
Authorized functions : open, close, read, write, lseek, malloc, free, getpid, kill, signal,
sigaction, sigemptyset, setcontext, getcontext, usleep, nanosleep, pause, getline, fopen,
fclose
```
```
You are allowed to use one (and only one) global variable, if you can justify it.
```
You all know the very famous Battleship game. Well, I hope so.

You must code a terminal version of this game.

The two players are ONLY allowed to comunicate using the signals SIGUSER1 and SIGUSER.

The map size is 8x8. On each turn, you must display your positions, and then your enemy’s positions.

At the end of the game (when all the ships of a player have been hit), you must display whether “I won” (and return 0) or “Enemy won” (and return 1).

### ∇ Terminal - + x

```
∼/B-PSU-200> ./navy -h
USAGE
./navy [first_player_pid] navy_positions
DESCRIPTION
first_player_pid: only for the 2nd player. pid of the first player.
navy_positions: file representing the positions of the ships.
```
The file passed as parameter must contain lines formatted the following way:

```
LENGTH : FIRST_SQUARE : LAST_SQUARE
```
where LENGTH is the length of the ship, FIRST_SQUARE and LAST_SQUARE its first and last positions.
In this file, you must have 4 ships (of lengths 2,3,4 and 5).
If the navy file is invalid, you have to quit the program and consider it as an error.

## Example

```
The display must be EXACTLY the same as the one below.
```
Here is an example game.
The user inputs are written in _italic_ font.

### ∇ Terminal - + x

```
∼/B-PSU-200> cat pos
2:C1:C
3:D4:F
4:B5:B
5:D7:H
```
### ∇ Terminal - + x

```
∼/B-PSU-200> cat pos
2:C4:D
3:H1:H
4:E6:H
5:B1:F
```

### Connection

Player 1

### ∇ Terminal - + x

```
∼/B-PSU-200> ./navy pos
my_pid: 4242
waiting for enemy connection...
```
```
enemy connected
```
Player 2

### ∇ Terminal - + x

```
∼/B-PSU-200> ./navy 4242 pos
my_pid: 4250
successfully connected
```

### Turn #

Player 1

### ∇ Terminal - + x

```
my positions:
|A B C D E F G H
-+---------------
1|.. 2.....
2|.. 2.....
3|........
4|... 3 3 3..
5|. 4......
6|. 4......
7|. 4. 5 5 5 5 5
8|. 4......
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|........
2|........
3|........
4|........
5|........
6|........
7|........
8|........
```
```
attack: Z
wrong position
attack: B
B6: missed
```

Player 2

### ∇ Terminal - + x

```
my positions:
|A B C D E F G H
-+---------------
1|. 5 5 5 5 5. 3
2|....... 3
3|....... 3
4|.. 2 2....
5|........
6|.... 4 4 4 4
7|........
8|........
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|........
2|........
3|........
4|........
5|........
6|........
7|........
8|........
```
```
waiting for enemy’s attack...
B6: missed
```
```
attack: 4
wrong position
attack: C
C1: hit
```

### Turn #

Player 1

### ∇ Terminal - + x

```
my positions:
|A B C D E F G H
-+---------------
1|.. x.....
2|.. 2.....
3|........
4|... 3 3 3..
5|. 4......
6|. 4......
7|. 4. 5 5 5 5 5
8|. 4......
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|........
2|........
3|........
4|........
5|........
6|. o......
7|........
8|........
```
```
attack: C
C4: hit
```
```
waiting for enemy’s attack...
D1: missed
```

Player 2

### ∇ Terminal - + x

```
my positions:
|A B C D E F G H
-+---------------
1|. 5 5 5 5 5. 3
2|....... 3
3|....... 3
4|........
5|.. 2 2....
6|. o.. 4 4 4 4
7|........
8|........
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|.. x.....
2|........
3|........
4|........
5|........
6|........
7|........
8|........
```
```
waiting for enemy’s attack...
C4: hit
```
```
attack: D
D1: missed
```
Etc.


### Last Turn

Player 1

### ∇ Terminal - + x

```
attack: H
H6: hit
```
```
my positions:
|A B C D E F G H
-+---------------
1|o. x o. o. o
2|.. 2.. o..
3|. o.. o...
4|... x x x..
5|. x o.. o o.
6|. x......
7|o x. x x x 5 5
8|. x. o. o. o
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|. x x x x x. x
2|... o. o. x
3|. o.... o x
4|.. x x o.. o
5|..... o..
6|. o.. x x x x
7|.. o... o.
8|..... o..
```
```
I won
```

Player 2

### ∇ Terminal - + x

```
waiting for enemy’s attack...
H6: hit
```
```
my positions:
|A B C D E F G H
-+---------------
1|. x x x x x. x
2|... o. o. x
3|. o.... o x
4|.. x x o.. o
5|..... o..
6|. o.. x x x x
7|.. o... o.
8|..... o..
```
```
enemy’s positions:
|A B C D E F G H
-+---------------
1|o. x o. o. o
2|..... o..
3|. o.. o...
4|... x x x..
5|. x o.. o o.
6|. x......
7|o x. x x x..
8|. x. o. o. o
```
```
Enemy won
```

## Bonus

```
You have to make the mandatory part before adding bonus!
```
Here are some example of bonus:

- play against an AI,
- a nice interface, music,
- multiplayer mode with more than 2 players,
- customize game,
- networking,
- and whatever you feel like.



1. A programming language : is a formal computer language or constructed language
   designed to communicate instructions to a machine, particularly a computer

2. An algorithm: a set of rules to be followed in calculations or other problem-solving operations,
   especially computer

# Types of programming languages

- High-level: are closer to human languages and highly understandable. Programs written in a high-level language must be translated into machine language by a "compiler" or "interpreter". ex: COBOL, c, c++,..

  `Compiler/ interpreter` are the computer programs that convert a high-level programming language to a low level machine language.

- Intermediate/ Assembly : it uses short abbreviations codes(Mnemonics) for instructions and allows the programmer to introduce names of blocks of memory that hold data. It can be easily translated to machine language.

- Machine language: it's the language of machines, constisting of bits(1 s and 0s) put together into chunks like bytes, a group of 8 bits, and lots of other larger sizes.

## C++

C++ is a high-level language developed by Bjarne Stroustrup starting in 1979 at Bell labs. C++ runs on a variety of platforms, such as Windows, Mac OS, and various versions of UNIX.

It is an extension to C programming language
It has OOP features.

# Variables

Variable : named storage that our programs can manipulate
Each variable needs an identifier that distinguishes if from others.

A valid identifier is a sequence of one or more letters, digits or underscore
Upper and lowercase letters are distinct because c++ is case-sensitive

`Fundamental data-types`

- char : character or small integer(size = 1 byte , range -128 to 127)
- short int : short integer(size = 2 bytes)
- int : integer(4 bytes)
- long int(long): integer(4bytes)
- bool: boolean value.TRUE or FALSE (1 byte)
- float: floating point number (4 bytes)
- Double: double precision floating point (8 bytes)

Note: The size and range of data types depend on the system the program is compiled on.

# Operators

An operator is a symbol that tells the compiler to perform specific mathematical or logical manipulations.

- Arithmetic operators(+, -, \*, /, %, ++, --)
- Relational operators(==, !=, >, <, >=, <=)
- Logical operators(&&, ||, !)
- Assignment operators(=, +=, -=, \*=, /=, %=)
- Bitwise operators(&, |,, ^, ~, <<, >>, )
- Misc operators(sizeof, condition ? X:Y)


## Queue
Queue is a `linear data structure` which operates in a FIFO or LILO. Queue is ADT with a bounded(predefined) capacity.

It is a simple data structure that allows  adding and removing elements in FIFO or LILO.

 * Elements are added at one end(rear end) === Enqueue
 * ELements are removed from other end(front/head end).  === Dequeue

  => Operations performed

  1) Enqueue()    2) dequeue  3) isFull   4) isEmpty  5) count

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

## Pointers

Dynamic memory allocation: allows to set array size dynamically during run time rather that at compile time.

## Functions

1.  `Inline function`: if a function is inline, the compiler places it's copy of the code at each point where that function is called at compile time.

No control transfer is made when the function is inline.

2.  `Default parameters` : default argument is a value provided in function declaration that automatically assigned by the compiler if caller of the function doesn't provide a value for the argument with defualt value.

3.  `Pass by value` : the call/pass by value method of passing arguments to a function copies the actual value of an argument into the formal paramter of the function.

In this case ,the changes made to then parameter inside the function have no effects on the argument. C++ is pass by value by default.

4. `Pass by reference`: call by reference method of passing arguments to a function copies the referene of an argument into the formal parameter.

Inside the function, the reference is used to access the actual arguments used in the call. This means that the changes made to the parameter affect the passed argument.

5. `Pass by pointer or call by address`: the call by pointer methid of passign arguments to a funcation copies the address of an argument into the formal parameter.

Inside the function, the address is used to access the actual argument used in the call. This means that the changes made to the parameter affect the passed argument.

## Structures

A structure in C++ is a group of data elements grouped together under one name. These data members can have different types and different lengths. It is a `user defined data type` which allows us to combine data items of different kinds.

## OOP

# Procedural Oriented programming vs Object Oriented programming

1. Procedural programming

- List of instructions for a computer to follow
- Group of similar tasks are organized as functions
- Most functions shared global data

2. Object Oriented Programming

- Programs are divided into Objects
- Data structures are designed such that they characterize objects.
- Functions that operate on the data of an object are tied together in that the same data structure.
- Data is hidden and cannot be directly accessed.

\*\* Basic concepts

1. Classes & objects
2. Data abstraction and encapsulation
3. Inheritance
4. Polymorphism
5. Dynamic binding
6. Message passing

\*\* Types of constructors

1. Default parameter
   this is a constructor which doesn't take an argument
2. Parameterized constructor
3. Copy constructor
   is a member function which initializes an object using another object of the same class.

\*\* Destructor
is a member function which destructs or delete an object.

It is called when:

- the function ends
- the program ends
- a block containing local variabls ends
- a delete operator is called

` A destructor is explicitly created when there is a need to release a memory before the class instance is destroyed. This must be to avoid memory leak`

# Pointer to objects

1. Passing objects as arguments in functions
2. Returning Objects from functions
3. Pointer to objects

## Queue

Queue is a `linear data structure` which operates in a FIFO or LILO. Queue is ADT with a bounded(predefined) capacity.

It is a simple data structure that allows adding and removing elements in FIFO or LILO.

- Elements are added at one end(rear end) === Enqueue
- ELements are removed from other end(front/head end). === Dequeue

=> Operations performed

1. Enqueue() 2) dequeue 3) isFull 4) isEmpty 5) count

## Linked list

It's a linear data structure, in which elements are stored at contiguous memory locations. The elements in linked list are linked using `pointers`

Linked list has nodes where each node contains `data field` and `reference` to the next node in the list.

# Advantages

    1. Dynamic size(creating the space needed only)
    2. Ease of insertion and deletion

# Disadvantages

    1. Random access is not allowed. We have to access elements sequentially starting from the first node.
    2. Extra memory space for a pointer is required
    3. Not cache friendly.

\*\* Singly linked list

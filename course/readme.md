1. A programming language : is a formal computer language or constructed language
   designed to communicate instructions to a machine, particularly a computer

2. An algorithm: a set of rules to be followed in calculations or other problem-solving operations,
   especially computer

# Types of programming languages

- High-level: are closer to human languages and highly understandable. Programs written in a high-level language must be translated into machine language by a "compiler" or "interpreter". ex: COBOL, c, c++,..

  `Compiler/ interpreter` are the computer programs that convert a high-level programming language to a low level machine language.

- Intermediate/ Assembly : it uses short abbreviations codes(Mnemonics) for instructions and allows the programmer to introduce names of blocks of memory that hold data. It can be easily translated to machine language.

- Machine language: it's the language of machines, constisting of bits(1 s and 0s) put together into chunks like bytes, a group of 8 bits, and lots of other larger sizes.

# C++

C++ is a high-level language developed by Bjarne Stroustrup starting in 1979 at Bell labs. C++ runs on a variety of platforms, such as Windows, Mac OS, and various versions of UNIX.

It is an extension to C programming language
It has OOP features.

## Variables

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

## Operators

An operator is a symbol that tells the compiler to perform specific mathematical or logical manipulations.

- Arithmetic operators(+, -, \*, /, %, ++, --)
- Relational operators(==, !=, >, <, >=, <=)
- Logical operators(&&, ||, !)
- Assignment operators(=, +=, -=, \*=, /=, %=)
- Bitwise operators(&, |,, ^, ~, <<, >>, )
- Misc operators(sizeof, condition ? X:Y)

# Pointers

Dynamic memory allocation: allows to set array size dynamically during run time rather that at compile time.

# Functions

1.  `Inline function`: if a function is inline, the compiler places it's copy of the code at each point where that function is called at compile time.

No control transfer is made when the function is inline.

2.  `Default parameters` : default argument is a value provided in function declaration that automatically assigned by the compiler if caller of the function doesn't provide a value for the argument with defualt value.

3.  `Pass by value` : the call/pass by value method of passing arguments to a function copies the actual value of an argument into the formal paramter of the function.

In this case ,the changes made to then parameter inside the function have no effects on the argument. C++ is pass by value by default.

4. `Pass by reference`: call by reference method of passing arguments to a function copies the referene of an argument into the formal parameter.

Inside the function, the reference is used to access the actual arguments used in the call. This means that the changes made to the parameter affect the passed argument.

5. `Pass by pointer or call by address`: the call by pointer methid of passign arguments to a funcation copies the address of an argument into the formal parameter.

Inside the function, the address is used to access the actual argument used in the call. This means that the changes made to the parameter affect the passed argument.

# Recursive functions

A function that calls itself. This technique is called recursion. `Recursion` is the process of repeating items in a self-similar way.

The recursion continues until some condition is met to prevent it.

If the speed of the program is vital, then, you should avoid using recursion. Recursions use more memory and are generally slow.

# Structures

A structure in C++ is a group of data elements grouped together under one name. These data members can have different types and different lengths. It is a `user defined data type` which allows us to combine data items of different kinds.

# OOP

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

 `Memory leak` : occurs when programs allocated memory by new keyword and forgets to deallocate the memory by `delete() function or delete[]`.

## Pointer to objects

1. Passing objects as arguments in functions
2. Returning Objects from functions
3. Pointer to objects

# File handlding in C++

- `Files` are used to store data permanently.
- `A stream` is an abstraction that represents a device on which input and output operations are perfomed. It can be represented as a source or destination of characters of indefinite length.

\*\* Data types in file handling

1. ofstrean: it's data type that represents the output file stream and is used to create files and to write information to the files.
2. ifstream: represents the input file stream and is used to read information from files.
3. fstream: represents the file stream generally. It has capabilities of both `ofstream` and `ifstream` which means it can create files, write information to the files, and read information from the files.

# Queue

Queue is a `linear data structure` which operates in a FIFO or LILO. Queue is ADT with a bounded(predefined) capacity.

It is a simple data structure that allows adding and removing elements in FIFO or LILO.

- Elements are added at one end(rear end) === Enqueue
- ELements are removed from other end(front/head end). === Dequeue

=> Operations performed

1. Enqueue() 2) dequeue 3) isFull 4) isEmpty 5) count

# Linked list

It's a linear data structure, in which elements are stored at contiguous memory locations. The elements in linked list are linked using `pointers`

Linked list has nodes where each node contains `data field` and `reference` to the next node in the list.

## Advantages

    1. Dynamic size(creating the space needed only)
    2. Ease of insertion and deletion

## Disadvantages

    1. Random access is not allowed. We have to access elements sequentially starting from the first node.
    2. Extra memory space for a pointer is required
    3. Not cache friendly.

\*\* Singly linked list

# Tree DS

Tree is a non linear data structure that simulates a hierarchical tree structure with a root value and subtress of children with parent node, represented as set linked nodes.

Conside school staff flow as hierarchical tree example.

\*\* Important tree terms

1.  Root: is a special node in a tree. The entire tree is referenced throut it and doesn't have a parent.
2.  Parent node: is an immediate predecessor of a node
3.  Child node: all immediate successors of a node are its children.
4.  Siblings: nodes with the same parent are called siblings.
5.  leaf: last node in the tree. there is node after this node.
6.  Edge: this is a connection between one node to another. It is a line between two nodes or a node and a leaf.
7.  Path: is a number of successive edges from source node to destination node.
8.  Degree of node: this is equal to number of children, a node have.

\*\* Properties of tree data structure(important terms)

- Tree can be termed as `Recursive` data structure
  This means that we can devide a whole tree into subtrees repeatedly until we reach the single node of the tree.
- In a valid for `N nodes` we have `N-1` edges/links.

- `Depth of node`: this represents the number of edges from the tree's root node to the node. Depth of root node is 0.
- `Height of node` : it's the number of edges on the longest path between that and leaf.
- `Height of tree` : this is the height of its root node.

### Types of trees

1. General tree
2. Binary tree
3. Binary search tree
4. AVL tree
5. Spanning tree
6. B-Tree
7. B+ tree
8. Heap tree

## Binary tree

this is a tree data structure in which each node has `at most two children` which are referred to as `Left child(LC)` and the `Right child(RC)`.

\*\* Important terms in BT

- A binary tree is called `STRICT/PROPER` binary tree, when each node has 2 or 0 children.
- A binary tree is called `COMPLETE` binary tree if all levels except the last are completely filled and all nodes are as left as possible.
- A binary tree is caller `PERFECT` binary tree of all levels are completely filled with 2 children each.
- Max number of nodes at level X = 2^X;
- For a binary tree, maximum no of nodes with height h = 2^0 + 2^1+ .... +2^h = 2^(h+2) - 1
- `BALANCED` binary tree: this is when the difference between the height of the left and right subtree for every node is not more than k(usually 1)

# Graphs

Graphs consists of a finite of vertices(or nodes) and set of edges(or links) which connect a pair of nodes.
Trees vs graph

1.  Only one path/edge btn 2 nodes 1. Multiple edges btn 2 nodes.
2.  Has a root node 2. No root node
3.  Don't have loops 3. Can have loops
4.  Have N-1 edges 4. No of edges is not defined
5.  Hierarchical model 5. Network model

Types of graphs

- Directed graph
- Undirected graph: these are bidirectional, with no direction associated with them. This graph can be traversed in either direction.
- Weighted graphs: each branch is a given a numberical weight
- Unweighted graph: is a graph in which all edges/paths are considered to have same weight.

# Adjacency matrix

is a way of representing a graph as a matric of booleans. A finite graph can be represented in the form of square matrix on a computer, where the boolean value of the matrix indicates of there is a direct path between two vertices

Adjacency matrix brings up the drawback of using unnecessary space which stores 0s(from unlinks)

# Adjacency list

In adjacency list, we use an array of a list to represent the graph. The size of the array is equal to the number of vertices. Let the array be an array[]. An entry array[i] represents the list of vertices adjacent to the ith vertex.

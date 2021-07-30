# 0x12. C - Singly linked lists
## Concepts
Data Structures
[a link](https://www.geeksforgeeks.org/data-structures/)
## Learning Objectives

    When and why using linked lists vs arrays
    How to build and use linked lists

### Please use this data structure for this project:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Tasks
### 0. Print list 
Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf
#### File: 0-print_list.c
### 1. List length
Write a function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);

#### File: 1-list_len.c
### 2. Add node 
Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

#### File: 2-add_node.c
### 3. Add node at the end 
Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

#### File: 3-add_node_end.c
### 4. Free list 
Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);

#### File: 4-free_list.c
### Why I'm here?
Last week was very hard...
I dont know what to think about her...
I need more free time...

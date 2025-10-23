## memcpy // memmove

### Definition and gotcha:

Both copy n bytes from one buffer to another, but memmove allows safe copy from a buffer to itself when they overlap.

### Difference example:
    
    ft(buff, buff+2, 4);
    
Initial:

    buff:        [a][b][c][d][e][f]
    'buff+2':          [ ][ ][ ][ ]
    (both are actually the same memory area)

Forward copy (bad):

    dest[0] = 'a' overwrites 'c'
    dest[1] = 'b' overwrites 'd'
    dest[2] : corrupted data, should be copying 'c' from original data, but was overwritten by 'a' in step 0
    dest[3] : corrupted data, should be copying 'd' from original data, but was overwritten by 'b' in step 1

Backward copy (good):

    dest[3] = 'd' overwrites 'f'
    dest[2] = 'c' overwrites 'e'
    dest[1] = 'b' overwrites 'd'
    dest[0] = 'a' overwrites 'c'

## Function Pointers — Quick Reference

### Syntax
    
    <return_type> (*<name>)(<parameter_types>);

- `(*<name>)` : `<name>` is a pointer to a function.  
- `<return_type>` : what the function returns.  
- `<parameter_types>` : what arguments it takes.

| Declaration                   | Meaning                                                     | Example usage                           |
|-------------------------------|-------------------------------------------------------------|-----------------------------------------|
| `void (*f)(void *)`           | pointer to function taking `void *` and returning `void`    | `ft_lstiter` callback                   |
| `void *(*f)(void *)`          | pointer to function taking `void *` and returning `void *`  | `ft_lstmap` transform function          |
| `void (*del)(void *)`         | pointer to function taking `void *` and freeing/deleting it | `ft_lstclear`, `ft_lstdelone`           |

### Calling Function Pointers

    void hello(void *p) { printf("Hello %s\n", (char *)p); }

    void (*f)(void *) = hello;
    f("world");      // ✅ same as (*f)("world")
    (*f)("again");   // ✅ equivalent


- `f(args)` and `(*f)(args)` are identical in C.
- `(*f)` is just a more explicit dereference.

### Return Types
- `void (*f)(void *)` → f points to a function that returns nothing.
- `void *(*f)(void *)` → f points to a function that returns a void pointer.

---

## Linked List Functions

### Basic Structure

    typedef struct s_list {
        void            *content;
        struct s_list   *next;
    } t_list;

- `content` : generic pointer to stored data.  
- `next` : pointer to next node or `NULL`.  
- a list is represented by a head pointer (`t_list *head`).  
- so an empty list is : `head == NULL`.

---

## `ft_lstadd_front`

    void ft_lstadd_front(t_list **lst, t_list *new);

### What it does
- Inserts `new` at the beginning of the list.
- Updates the head pointer to `new`.
- Links `new->next` to the previous head.

### Why `t_list **lst`?
- You need a pointer to the head to modify it in the caller.
- If you passed `t_list *lst` instead, you'd only change a local copy.

### Execution Flow

Before: head -> [A] -> [B] -> NULL

    ft_lstadd_front(&head, newNodeC);

    1. `new->next = *lst;` → `[C].next = [A]`  
    2. `*lst = new;` → `head = [C]`

After: head -> [C] -> [A] -> [B] -> NULL

## `ft_lstiter`

    void ft_lstiter(t_list *lst, void (*f)(void *));

### What it does
- Traverses the list.
- Calls `f(content)` for each node.
- Does not modify structure or allocate new memory.

## `ft_lstmap`

    t_list *ft_lstmap(
        t_list *lst,
        void *(*f)(void *),
        void (*del)(void *)
    );

### What it does
- Builds a new list by applying `f` to each node’s content.
- Each original node → transformed content → new node.
- If anything fails (e.g. malloc), frees everything with `del`.

---

### Internal Loop Logic

    while (lst)
    {
        ndata = f(lst->content);        // transform content
        node = ft_lstnew(ndata);        // create new node
        if (!node) {                    // allocation failed
            del(ndata);
            ft_lstclear(&out, del);
            return NULL;
        }
        if (!out)
            out = node;                 // first node, head of need list, only on first iteration of loop
        else
            tail->next = node;          // append node the last one for every other iterarion
        tail = node;                    // update tail
        lst = lst->next;                // advance original list
    }

- `out` = head of new list
- `tail` = pointer to last node, for efficient O(1) appending
- Returns the new list’s head

---

## `ft_lstdelone` and `ft_lstclear` (Support)

### `ft_lstdelone`

    void ft_lstdelone(t_list *lst, void (*del)(void *));

- Frees a single node.
- Calls `del` on content first (if provided).

### `ft_lstclear`

    void ft_lstclear(t_list **lst, void (*del)(void *));

- Frees all nodes.
- Calls `del` on each content.
- Sets `*lst = NULL`.

---

## Key Takeaways

- `t_list **` allows modifying the **head** pointer.
- `ft_lstadd_front` stacks elements at the front without losing previous ones.
- `ft_lstiter` applies an action without modifying structure.
- `ft_lstmap` builds a new list efficiently using a `tail` pointer.
- Callbacks (`f`, `del`) make list functions **generic** and reusable.
- `del` ensures proper cleanup and prevents memory leaks.
- Always handle allocation failures carefully in `map`.

---
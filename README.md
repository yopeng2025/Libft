# Libft - Your Very First C Library


**The aim of this project is to code a C library, regrouping usual functions that you will be allowed to use in all your other projects at 42.**



## 🧠 Key Learning Objectives

* **🟢 C Fundamentals**: Reimplementing standard libc functions to understand their inner workings.
* **🔵 Memory Management**: Mastering `malloc` and `free` to handle heap memory without leaks.
* **🟡 String Manipulation**: Deep dive into null-terminated strings and buffer handling.
* **🔴 Linked Lists (Bonus)**: Implementing a custom data structure to manage dynamic collections of data.




## 📂 Project Structure

### 🟢 Part 1: Libc Functions
* **Goal**: Reimplement standard functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`.
* **Functions**:
    * **Checkers**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
    * **String Operations**: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_strlcpy`, `ft_strchr`, etc.
    * **Conversion**: `ft_toupper`, `ft_tolower`, `ft_atoi`.

### 🔵 Part 2: Additional Functions
* **Goal**: Implement non-standard functions that are essential for future 42 projects.
* **Functions**:
    * **Allocators**: `ft_substr`, `ft_strjoin`, `ft_strtrim`.
    * **Split**: `ft_split` (The critical string-to-array logic).
    * **Converters**: `ft_itoa`.
    * **Mappers**: `ft_strmapi`, `ft_striteri`.
    * **I/O Streams**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 🔴 Bonus Part: Linked Lists
* **Goal**: Create a functional Linked List library using the `t_list` structure.
* **Concepts**:
    * **Node Structure**: `void *content` (data) and `struct s_list *next` (pointer to next node).
    * **List Management**:
        * **Creation**: `ft_lstnew` to initialize a new node.
        * **Adding**: `ft_lstadd_front` and `ft_lstadd_back`.
        * **Deletion**: `ft_lstdelone` and `ft_lstclear` (crucial for memory safety).
        * **Processing**: `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, and the complex `ft_lstmap`.





## 🚀 Technical Requirements
* **Language**: C (Strictly following the Norminette).
* **Compiler**: `cc` with `-Wall -Wextra -Werror` flags.
* **Makefile**: Must contain `$(NAME)`, `all`, `clean`, `fclean`, `re`, and `bonus`.
* **Archive**: Generates a `libft.a` static library using `ar rcs`.


### 💡 Tips for Libft & Bonus:
1. **Memory Cleanup**: In the bonus part, always ensure your `ft_lstclear` correctly calls the 'del' function to avoid leaks within the list nodes.
2. **Generic Pointers**: The `void *` in `t_list` allows the list to store *any* type of data—this is the base of generic programming in C.
3. **The Makefile Bonus**: Remember that your `bonus` rule should not relink the library if it's already up to date!

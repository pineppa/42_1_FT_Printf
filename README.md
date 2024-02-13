<span style="text-align:center;">

# :black_nib: ft_printf
Because putchar, putstr and putnbr are not enough.

</span>

---

<span style="text-align:center; color: #2b2;">

Project passed: 100/100

</span>

---

<span style="text-align:center;">

## :wrench: Prototype

```
void ft_printf(const char *str, ...);
```

## :mortar_board: Learning variadic functions

</span>

Requirement: `#include <stdarg.h>`

Prototype structure: `return_type function_name(data_type arg1, ...);`

Variadic functions allow a variable amount of arguments with variable types.

They must have a first argument clearly defined followed by three dots `...`

Differently than the more common `char **argv` used in `int main`, the use of variadic functions allows to pass variables of different types. Based on the function itself, the variable type must be correctly handled. In the case of printf, for example, this is done via the keychar `%` followed by a series of values accordingly. But... more about printf later now let's dive into the `stdarg.h` library!

<span style="text-align:center;">

### :books: #include <stdarg.h>

</span>

<table>
    <tr style="background-color: #000;">
        <th style="text-align:center;">
            Variable type
        </th>
        <th style="text-align:center;">
            Function
        </th>
    </tr>
    <tr>
        <td style="text-align:center;">
            <span style="color: #cf0;">va_list</span>
        </td>
        <td>
            Data type to handle the list of variable argument passed
        </td>
    </tr>
    <tr style="background-color: #000;">
        <td style="text-align:center;">
            Prototype
        </td>
        <td style="text-align:center;">
            Function
        </td>
    </tr>
    <tr>
        <td>
            <code>va_start(<span style="color: #cf0;">va_list</span> ap, <span style="color: #cf0;">data_type</span> arg1);</code>
        </td>
        <td>
            Initializes <code><span style="color: #cf0;">va_list</span> ap</code> as a pointer to <code>arg1</code>
        </td>
    </tr>
    <tr>
        <td>
            <code>va_arg(<span style="color: #cf0;">va_list</span> ap, <span style="color: #f0f;">data_type</span>);</code>
        </td>
        <td>
            Retrieves the next passed argument and assigns it the expected <code><span style="color: #f0f;">data_type</span></code>.
        </td>
    </tr>
    <tr>
        <td>
            <code>va_copy(<span style="color: #cf0;">va_list</span> dest, <span style="color: #cf0;">va_list</span> src);</code>
        </td>
        <td>
            Copies the list of arguments from the source va_list (<code><span style="color: #cf0;">va_list</span> src</code>) to the destination va_list (<code><span style="color: #cf0;">va_list</span> dest</code>)
            <p style="text-align:center;">
                <code><span style="color: #cf0;">va_list</span> src</code> -> <code><span style="color: #cf0;">va_list</span> dest</code>
            </p>
        </td>
    </tr>
    <tr>
        <td>
            <code>va_end(<span style="color: #cf0;">va_list</span> ap, <span style="color: #cf0;">data_type</span> arg1);</code>
        </td>
        <td>
            Terminates and cleans the <code><span style="color: #cf0;">va_list</span> ap</code> pointer.
        </td>
    </tr>
</table>

<span style="text-align:center;">

### stdargs.h <---> ft_printf

<code>void ft_printf(const char *str, ...);</code>

</span>

> printf -> formatted print

<code>const char *str</code> is the string to be printed. The <code>%</code> character is used as a placeholder to pass the value stored in a variable, passed as an additional argument. <br>
The <span style="color: #f0f;">data_type/format</span> of the argument signals the following character.

## :book: ft_printf options

### :pen: Basic cases

* <span style="color:#cf0;">***%c***</span> - Prints a single character.
* <span style="color:#cf0;">***%s***</span> - Prints a string (as defined by the common C convention).
* <span style="color:#cf0;">***%p***</span> - The void * pointer argument has to be printed in hexadecimal format.
* <span style="color:#cf0;">***%d***</span> - Prints a decimal (base 10) number.
* <span style="color:#cf0;">***%i***</span> - Prints an integer in base 10.
* <span style="color:#cf0;">***%u***</span> - Prints an unsigned decimal (base 10) number.
* <span style="color:#cf0;">***%x***</span> - Prints a number in hexadecimal (base 16) lowercase format.
* <span style="color:#cf0;">***%X***</span> - Prints a number in hexadecimal (base 16) uppercase format.
* <span style="color:#cf0;">***%%***</span> - Prints a percent sign.

## 💡 A very interesting behviour:

With the common flags used to compile a project at 42 (`-Wall`, `-Wextra`, `-Werror`), it is possible to compile and pass a wrong implementation of printf:

```
printf("Hello %zzzzzzzzz World", str);
```

This would usually be caught by the `-Wformat` flag, but in this case it seems to pass an undefined behaviour. The use of `'z'` is done on purpose as it is not one of the characters handled by printf. In this case, printf's implementation will stop at the `'%'` to assess what it needs to print. Since `'z'` is not among the parameters he knows how to handle, it searches further until it encounters a character

### :muscle: Advanced cases - Not implemented

<span style="color:#b00;">Bonus list:</span>

* Manage any combination of the following flags:
  * `-`
  * `0`
  * `.`
  * Minimum field width under all conversions.

*  Manage all the following flags:
  * `#`:
  * ` `: (Yes, one of them is a space)
  * `+`:

## Return values and Errors management ([Source: IBM](https://www.ibm.com/docs/en/i/7.2?topic=functions-printf-print-formatted-characters#d60922e1872))

Whenever printf fails, it should return a negative value. The possible errors number `errno` are

* `Value`: Meaning
* `EBADMODE`: The file mode that is specified is not valid.
* `ECONVERT`: A conversion error occurred.
* `EIOERROR`: A non-recoverable I/O error occurred.
* `EIORECERR`: A recoverable I/O error occurred.
* `EILSEQ`: An invalid multibyte character sequence was encountered.
* `EPUTANDGET`: An illegal write operation occurred after a read operation.
* `ESTDOUT`: stdout cannot be opened

Most of these errors are generated in the case of a bad buffer management, or reading. In the mandatory cases is quite difficult to generate printf crashes that are not connected with I/O errors or when a file is involved.

<span style="text-align:center;">

# :black_nib: ft_printf
Because putchar, putstr and putnbr are not enough.

</span>

---



---

<span style="text-align:center;">

## :wrench: Prototype

<code>void ft_printf(const char *str, ...);</code>

## :mortar_board: Learning variadic functions

</span>
Requirement: <code>#include &lt;stdarg.h&gt;</code>

Prototype structure: <code>return_type function_name(data_type arg1, ...);</code>

Variadic functions allow a variable amount of arguments with variable types. 

They must have a first argument clearly defined followed by three dots <code>...</code>

Differently than the more common <code>char **argv</code> used in <code>int main</code>, the use of variadic functions allows to pass variables of different types. Based on the function itself, the variable type must be correctly handled. In the case of printf, for example, this is done via the keychar <code>%</code> followed by a series of values accordingly. But... more about printf later now let's dive into the &lt;stdarg.h&gt; library!

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

### :muscle: Advanced cases - Not yet implemented

* 
/*
** EPITECH PROJECT, 2022
** ex03
** File description:
** ex03
*/

/*

EX03:
    The goal of the last exercise is to code a little which can execute 2 or 3
    commands of your choice. To do this, you will need a structure which contains a char
    and a function pointer (it's a structure so don't initialize anything). After
    this, you will create an array (of the structure type) with some values 
    initialized and with functions adresses which are callback of the flag you want
    to "execute". You will also need a function which will browse the array to
    compare and find the right char associated and return the right function pointer.

Tips:
    1) ------------------------
    typedef struct example_s {
        => DON'T INITIALIZE ANYTHING IN YOUR STRUCTURE PLEAAAAAAASE !!!!
    } example_t;

    2) ------------------------
    You need to declare your array outside of the main or a random function.
    So it means that (if you're an EPITECH student), it's very depreciated to
    use global variables (declare your array in static const).

    3) ------------------------
    Your array will be build like that:

    static const <struct_type> <array_name>[] = {
        => Your variables
    };

    4) ------------------------
    To initialize values in your array :

    static const <struct_type> <array_name>[] = {
        {.<struct_var_1> = <value>, .<struct_var_2> = <value2>},
        {.<struct_var_1> = <value3>, .<struct_var_2> = <value4>},
        {.<struct_var_1> = <value5>, .<struct_var_2> = <value6>}
    };

    5) ------------------------
    You will also need :
        - To do a search function which will returns you the adress of an
        array index,
        - To do a variable in your main that can store the result (think about
        the type that you will need to store)

=> MAIN GOAL OF THIS EXERCISE : Give you the keys to stop to do too much if in
your programs which can be replaced by an array of function pointers.

*/

int main(int ac, char **av)
{
    return 0;
}

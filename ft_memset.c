/*https://www.holbertonschool.com/coding-resource-memset-in-c
The function receives three parameters, a pointer to a block of memory, an integer, and a size_t (an unsigned integer type designed to hold any array index).

The first parameter, s, represents a pointer to the block of memory to fill. The type void in this context signifies that the pointer can reference memory of any type.

The second parameter, c, is the character to fill s with. Note that while this parameter is received as an int, it is converted to an unsigned char when used to fill memory, 
to ensure that the function keeps just the eight bits needed from the received integer.

Finally, the third parameter, n, represents the size of the memory block to fill. While the pointer s references the location of the memory to fill, it says nothing about how much memory to fill. 
The parameter n, which is passed as a size_t to ensure a valid, positive size, signals just this information.

RETURN VALUE
void *
You will receive nothing back from memset that you do not give it - after filling the block of memory referenced by s, the function turns around and returns a pointer to s, the same [generically-typed] memory address passed when you call the function.
*/
#include "libft.h"

void *ft_memset(void *block, int pos, size_t size)
{
    char    *casted; //Crio primeiro uma variável do tipo char/string que será utilizada para segurar valor casted pra char que está no parametro void *block

    casted = (char *)block; //inicializamos conforme comentário anterior
    /*
     * We then start our loop. ft_memset nees to trust the size of len that is passed into it's parameter and it needs to work on a general piece of memory,
	 * not just a '\0' terminated string, so we can not have our loop's condition based on the usual idea that we will reach the end of a string.
	 * So in this case we say so long as the given len is greater than 0 we will continue the loop. We then move backwards through the string casted
	 * placing the int c inside of each index position. We do len - 1 because we are compensating for the terminating '\0' at the end of the string
	 * that we do not want to replace. We decrement len and then start the loop over again until len is no longer greater than 0. We then return block.
    */
    while (size > 0)
    {
        casted[size - 1] = pos;
        size--;
    }
    return (block);
}

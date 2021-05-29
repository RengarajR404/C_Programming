/* 
 * @file pointersInto.c
 * @author Rengaraj R
 * @brief  My First pointers code
 * @version 0.1
 * @date 2021-05-16
 * 
 */
/*
 * Pointer constants cannot be changed 
 * The address of the the variables decalared in a program changes from run to run 
 * Pointer constants are drawn from the set of addresses for a computer, exists, by themselves. We cannot change them. Only use them.
 * Even though addresses are const we cannot know where they will be. So it is still necessary to refer them symbolically.
 *  
*/
#include <stdio.h>
 
// Two adjacent memory locations allocated for char a,  char b and int lol 
int main()
{
    //Local declarations
    int *a, b;
    int lol;
    a = &b;
    b = 10;
    //stmnts
    printf("%p\n%p\n%p\n", &a, &b, &lol);
    printf("%d",*a);
    return 0;
}

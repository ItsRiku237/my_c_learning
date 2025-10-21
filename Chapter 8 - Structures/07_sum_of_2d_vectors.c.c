#include <stdio.h>
#include <string.h>
// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.
/*struct vector
{
    int i;
    int j;
};
struct vector sumvecto(struct vector v1, struct vector v2);
// here function is return strucr vector.
struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    struct vector v1 = {2, 3};
    struct vector v2 = {7, 9};
    // v1.i = 2;
    // v1.j = 3;
    // v2.i= 7;
    // v2.j = 9;
    struct vector v3 = sumvector(v1, v2);
    */
typedef struct vector
{
    int i;
    int j;
} V;
V sumvecto(V v1, V v2);
// here function is return strucr vector.
V sumvector(V v1, V v2)
{
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    V v1 = {2, 3};
    V v2 = {7, 9};
   
    V v3 = sumvector(v1, v2);
    printf("The sum of two dimensional vector is v3 = %di + %dj .", v3.i, v3.j);

    return 0;
}
#include <stdio.h>
// Write a structure capable of storing date. Write a function to compare those dates.
//  Solve problem 9 for time using ‘typedef’ keyword. 
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} DT ;

// int compare( DT d1, DT d2);

int compare(DT d1, DT d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }

} int main()
{
    // struct Date d1 = {27, 11, 2005};
    // struct Date d2 = {11, 6, 2025};
    DT d1 = {27, 11, 2005};
    DT d2 = {11, 6, 2025};
    printf("%d", compare(d1, d2));

    return 0;
}
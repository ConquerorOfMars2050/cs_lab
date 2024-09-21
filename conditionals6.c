#include <stdio.h>

int main (void) {

    int t1, t2, t3, t4;
    scanf ("%d %d %d %d", &t1, &t2, &t3, &t4);


    if (t1 >= t2 && t1 >= t3 && t1 >= t4) {

        printf ("The time required to complete all the jobs is %d", t1);

    }

    else if (t2 >= t1 && t2 >= t3 && t2 >= t4) {

        printf ("The time required to complete all the jobs is %d", t2);

    }

    else if (t3 >= t1 && t3 >= t2 && t3 >= t4) {

        printf ("The time required to complete all the jobs is %d", t3);

    }

    else {

        printf ("The time required to complete all the jobs is %d", t4);
    } 

    return 0;

}


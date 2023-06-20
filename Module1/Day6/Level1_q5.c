#include <stdio.h>
struct Point {
    int x;
    int y;
};
void swapPoints(struct Point* ptr1, struct Point* ptr2) {
    int temp = ptr1->x;
    ptr1->x = ptr2->x;
    ptr2->x = temp;
    temp = ptr1->y;
    ptr1->y = ptr2->y;
    ptr2->y = temp;
}

int main() {
    struct Point p1, p2;
    printf("Enter the x and y values for p1: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the x and y values for p2: ");
    scanf("%d %d", &p2.x, &p2.y);
    printf("Before swapping:\n");
    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);
    swapPoints(&p1, &p2);
    printf("\nAfter swapping:\n");
    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    return 0;
}

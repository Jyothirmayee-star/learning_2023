#include <stdio.h>
struct Box {
    double length;
    double width;
    double height;
};

int main() {
    struct Box myBox;
    printf("Enter Box length: ");
    scanf("%lf", &myBox.length);
    printf("Enter Box Width: ");
    scanf("%lf", &myBox.width);
    printf("Enter Box Height: ");
    scanf("%lf", &myBox.height);

    struct Box* boxPtr = &myBox;
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    printf("Volume of the box: %.2f\n", volume);

    double surfaceArea = 2 * ((*boxPtr).length * (*boxPtr).width +
                              (*boxPtr).width * (*boxPtr).height +
                              (*boxPtr).length * (*boxPtr).height);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);

    volume = boxPtr->length * boxPtr->width * boxPtr->height;
    printf("Volume of the box: %.2lf\n", volume);

    surfaceArea = 2 * (boxPtr->length * boxPtr->width +
                       boxPtr->length * boxPtr->height +
                       boxPtr->width * boxPtr->height);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);

    return 0;
}

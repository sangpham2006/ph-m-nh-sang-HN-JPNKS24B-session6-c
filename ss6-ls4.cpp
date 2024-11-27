#include <stdio.h>

int main() {
    float a, b, c; 
    float delta, x1, x2;  

    
    printf("nhap he so a: \n");
    scanf("%f", &a);
    printf("nhap he so b: \n");
    scanf("%f", &b);
    printf("nhap he so c: \n");
    scanf("%f", &c);

    if (a == 0) {
        if (b != 0) {
            printf("phuong trinh bac nhat co nghiem: x = %.2f\n", -c / b);
        } else {
            if (c == 0) {
                printf("phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            printf("phuong trinh co 2 nghiem phan biet.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("phuong trinh vo nghiem thuc.\n");
        }
    }

    return 0;
}


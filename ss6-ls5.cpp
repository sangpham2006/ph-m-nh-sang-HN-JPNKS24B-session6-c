#include <stdio.h>
int main() {
    int year, month, days;

    printf("nhap nam: \n");
    scanf("%d", &year);
    printf("nhap thang: \n");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("thang ko hop le\n");
        return 1;
    }

    int namnhuan = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        namnhuan = 1;
    }

    if (month == 2) {
        if (namnhuan) {
            days = 29;  
        } else {
            days = 28;  
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    printf("Nam %d, thang %d co %d ngay.\n", year, month, days);
    return 0;
}


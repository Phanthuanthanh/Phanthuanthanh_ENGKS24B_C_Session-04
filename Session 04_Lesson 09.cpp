#include <stdio.h>

int main() {
    int day, month, year, maxDay = 0;

    printf("Moi ban nhap ngay: ");
    scanf("%d", &day);
    printf("Moi ban nhap thang: ");
    scanf("%d", &month);
    printf("Moi ban nhap nam: ");
    scanf("%d", &year);

    if (year < 1) {
        printf("Nam khong hop le");
        return 0;
    }
    if (month < 1 || month > 12) {
        printf("Thang khong hop le");
        return 0;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDay = 31;
            break;
        case 4: case 6: case 9: case 11:
            maxDay = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDay = 29;
            } else {
                maxDay = 28;
            }
            break;
    }

    if (day < 1 || day > maxDay) {
        printf("Ngay %d/%d/%d khong hop le. \n", day, month, year);
    } else {
        printf("Ngay %d/%d/%d hop le. \n", day, month, year);
    }
	return 0;
}


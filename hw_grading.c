#include <stdio.h>

int main() {
    int math, sci, eng;
    float ma, sc, en; 

    printf("Enter Your Grade: ");
    int grade;
    scanf("%d", &grade);

    // เว้นบรรทัดให้ เพราะเดี๋ยวจะอ่านยาก ^^
    while (getchar() != '\n');

    printf("Math: ");
    char mat[3]; // แมตแบบย่อหนักกว่าแมต (จริงจัง:เดี๋ยวมันติดบวก (╥﹏╥))
    scanf("%s %d", mat, &math);

    // นี่ก็เว้นบรรทัด คนดีจัดๆ (￣ω￣)
    while (getchar() != '\n');

    printf("Science: ");
    char scie[3]; // ไซนเอ้้้ ไม้โทตัวเดียวไม่ได้ เดี๋ยวไม่เก๋ (จริงจัง:เดี๋ยวมันติดบวก (╥﹏╥))
    scanf("%s %d", scie, &sci);

    // นี่ก็เว้นบรรทัด มาแบบครบครัน(• ε •)
    while (getchar() != '\n');

    printf("English: ");
    char egg[3]; // อังกฤษก็เหมือนไข่ ตอกป้อกๆ แตกและละลายหายไป (จริงจัง:เดี๋ยวมันติดบวก (╥﹏╥))
    scanf("%s %d", egg, &eng);

    switch (mat[0]) {
        case 'A': ma = 4.0; break;
        case 'B': ma = 3.0; break;
        case 'C': ma = 2.0; break;
        case 'D': ma = 1.0; break;
        case 'F': ma = 0.0; break;
        default: ma = -1.0; // กันคนเหลี่ยม แบบย่อ
    }

    if (mat[1] == '+') {    //ไว้สำหรับพวก '+' ಠ╭╮ಠ
        ma += 0.5;
    } else if (mat[1] == '-') {
        ma -= 0.3;
    }

    switch (scie[0]) {
        case 'A': sc = 4.0; break;
        case 'B': sc = 3.0; break;
        case 'C': sc = 2.0; break;
        case 'D': sc = 1.0; break;
        case 'F': sc = 0.0; break;
        default: sc = -1.0; // กันคนเหลี่ยม แบบย่อ
    }

    if (scie[1] == '+') {   //ไว้สำหรับพวก + ಠ╭╮ಠ
        sc += 0.5;
    } else if (scie[1] == '-') {
        sc -= 0.3;
    }

    switch (egg[0]) {
        case 'A': en = 4.0; break;
        case 'B': en = 3.0; break;
        case 'C': en = 2.0; break;
        case 'D': en = 1.0; break;
        case 'F': en = 0.0; break;
        default: en = -1.0; // กันคนเหลี่ยม แบบย่อ
    }

    if (egg[1] == '+') {   //ไว้สำหรับพวก + ಠ╭╮ಠ
        en += 0.5;
    } else if (egg[1] == '-') {
        en -= 0.3;
    }

    // กันคนเหลี่ยม แบบละเอียด
    if (ma == -1.0 || sc == -1.0 || en == -1.0) {
        printf("Invalid grade entered. Please enter valid grades (A, B, C, D, or F) for all subjects.\n");
        return 1; // รีกลับด้วยเออเร้อ ¯\_ಠ_ಠ_/¯
    }

    printf("---------- Grade %d ----------\n", grade);
    printf("Math: %.1f        Credit: %d\n", ma, math);
    printf("Science: %.1f     Credit: %d\n", sc, sci);
    printf("English: %.1f     Credit: %d\n", en, eng);

    return 0;

    //เม้นท์ให้เยอะมาก เพราะกลัวอ่านไม่ออก กับอ่านไม่จบเพราะโค้ดยาวมาก ย่อมะเป็นอ่ะ หนูขอโต๊ด( ._.)
}

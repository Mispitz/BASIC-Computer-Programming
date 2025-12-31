#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    // 1. ประกาศตัวแปร
    char sentence[MAX_SIZE];
    int vowel_count = 0;
    char *char_ptr; // ตัวแปร Pointer

    // 2. รับข้อความ
    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }
    // ตัดปุ่ม Enter (\n) ออกจากข้อความ (ตาม Pre-code)
    sentence[strcspn(sentence, "\n")] = '\0';

    // 3. เริ่มต้น Pointer (ชี้ไปตัวแรก)
    char_ptr = sentence;

    // 4. วนลูปตรวจสอบ (Loop)
    // "ตราบใดที่สิ่งที่ Pointer ชี้อยู่ ไม่ใช่จุดจบ (\0)"
    while (*char_ptr != '\0') {

        // เช็คว่าเป็นสระไหม? ใช้ switch จะดูง่ายกว่า if ยาวๆ
        switch (*char_ptr) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++; // เจอก็บวกเพิ่ม
                break;
        }

        // 5. ขยับ Pointer ไปตัวถัดไป (สำคัญมาก!)
        char_ptr++; 
    }

    // 6. แสดงผล
    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}
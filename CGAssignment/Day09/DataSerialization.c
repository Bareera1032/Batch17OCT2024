#include <stdio.h>

int swap_int32(int val) {
    return ((val & 0xFF) << 24) |               
           ((val & 0xFF00) << 8) |     
           ((val & 0xFF0000) >> 8) |         
           ((val & 0xFF000000) >> 24);          
}

void showbytes(char *value, int n) {
    for (int i = 0; i < n; i++) {
        printf("Byte %d: 0x%02X\n", i, (unsigned char)value[i]);
    }
}

int main() {
    int val = 0x12345678;
    printf("Original value (hex): 0x%08X\n", val);

    int swapped_val = swap_int32(val);
    printf("Swapped value (hex): 0x%08X\n", swapped_val);

    printf("Original value bytes:\n");
    showbytes((char *)&val, sizeof(val));

    printf("Swapped value bytes:\n");
    showbytes((char *)&swapped_val, sizeof(swapped_val));

    return 0;
}


// 12S24008 - Rospika Sarah Yosefin Siregar
// 12S24027 - Grasia Gayatri Simanullang


#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char karakter[21];  
    fgets(karakter, sizeof(karakter), stdin);
    
    int length = strlen(karakter);
    if (length > 0 && karakter[length - 1] == '\n') {
        karakter[length - 1] = '\0';
        length--;
    }
    
    for (size_t i = 0; i < length; i++) {
        printf("%03d", karakter[i]);
    }
    
    printf("\n");
    return 0;
}


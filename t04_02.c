// 12S24008 - Rospika Sarah Yosefin Siregar
// 12S24027 - Grasia Gayatri Simanullang


#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char karakter[21];  
    fgets(karakter, sizeof(karakter), stdin);
    
    size_t lenght = strlen(karakter);
    if (lenght > 0 && karakter[lenght - 1] == '\n') {
        karakter[lenght - 1] = '\0';
        lenght--;
    }
    
    for (size_t i = 0; i < lenght; i++) {
        printf("%03d", karakter[i]);
    }
    
    printf("\n");
    return 0;
}


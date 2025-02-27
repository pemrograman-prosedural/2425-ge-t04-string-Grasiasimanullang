// 12S24008 - Rospika Sarah Yosefin Siregar
// 12S24027 - Grasia Gayatri Simanullang


#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char karakter[21];  
    scanf("%20[^\n]", karakter);
    int length = strlen(karakter);
    for (int i = 0; i < length; i++) {
      printf("%03d", karakter[i]);
    }
    
    return 0;
}


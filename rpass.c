#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    int i, l;
    char table[62];
    char pass[11];
    
    for ( i = 0; i < 26; i++ ) {
        table[i] = 'a' + i;
        table[i+26] = 'A' + i;
    }
    for ( i = 0; i < 10; i++ ) {
        table[i+52] = '0' + i;
    }
    
    srand((unsigned)time(NULL));
    
    l = 6 + rand() % 30;
    for ( i = 0; i < l; i++ ) {
        pass[i] = table[rand()%62];
    }
    pass[l] = '\0';
    
    printf("%s\n", pass);
}

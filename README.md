#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char word[101];
        scanf("%s", word);
        
        int len = strlen(word);
        
        if (len > 10) {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);//first string-- //middle elements--//last element
        } else {
            printf("%s\n", word);
        }
    }
    
    return 0;
}

#include <stdlib.h>
#include <string.h>

void set_string(char **s, char *to) {
    // Free the existing memory, if any
    if (*s != NULL) {
        free(*s);
    }
    
    // Allocate memory for the new string
    *s = (char*)malloc((strlen(to) + 1) * sizeof(char));
    
    // Copy the contents of 'to' to the newly allocated memory
    strcpy(*s, to);
}

#include <unistd.h>

int main() {
    char str[] = "_putchar\n";
    ssize_t bytes_written = write(1, str, sizeof(str) - 1);

    if (bytes_written == -1) {
        return 1;  // Error occurred while writing
    }

    return 0;
}

#include <windows.h> // Required for MessageBox

int main() {
    MessageBox(
        NULL,                                   // No parent window
        "File Sucessfully Downloaded.", // Message text
        "Login Successful",                    // Title bar text
        MB_OK | MB_ICONINFORMATION              // Button + icon type
    );
    return 0;
}

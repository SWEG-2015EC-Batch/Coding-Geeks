#include <iostream>

int main() {
    const double transmission_rate_chars_per_second = 960.0;
    double file_size_bytes;

    cout << "Enter the file size (in bytes): ";
    cin >> file_size_bytes;

    double transfer_time_seconds = file_size_bytes / transmission_rate_chars_per_second;

    cout << "The transfer will take " << transfer_time_seconds << " seconds." << std::endl;

    return 0;
}

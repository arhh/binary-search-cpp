#include <iostream>
using namespace std;

int binarySearch(int sequence[], int sequenceLength, int integerToFind) {
    int result = 0;
    int mid;
    int head = 0;
    int tail = sequenceLength;
    while (head <= tail && ! result) {
        mid = (head + tail) / 2;
        if (sequence[mid] < integerToFind) {
            head = mid + 1;
        }
        else if (sequence[mid] > integerToFind) {
            tail = mid - 1;
        }
        else {
            result = mid;
        }
    }
    if (! result) {
        result = -1;
    }
    return result;
}

int main() {
    int INT_SEQUENCE[12] = {1, 12, 15, 60, 89, 90, 100, 900, 909, 1000, 1100, 1200};
    int SEQUENCE_LENGTH = sizeof(INT_SEQUENCE) / sizeof(*INT_SEQUENCE);
    int INTEGER_TO_FIND = 909;
    cout << binarySearch(INT_SEQUENCE, SEQUENCE_LENGTH, INTEGER_TO_FIND) << " <-- Should be 8" << endl;
}


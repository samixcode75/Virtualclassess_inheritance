
#include "mylist.h"
template<class T>
class CustomList : public mylist<T> {
public:

    // ✅ Parameterized constructor with default argument
    CustomList(int size = 10) : mylist<T>(size) {}

    // ✅ Copy Constructor
    CustomList(const CustomList& other) : mylist<T>(other) {}

    // ✅ Destructor
    ~CustomList() {}

    // --------------------------------------------------

    bool isPrime(T n) {
        if (n < 2) return false;
        for (T i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    // 1️⃣ Sum of Prime Numbers
    T sum_ofPrime() {
        T sum = 0;

        for (int i = 0; i < this->currentSize; i++) {
            if (isPrime(this->arr[i]))
                sum += this->arr[i];
        }

        return sum;
    }

    // 2️⃣ Second Maximum Even
    T secondMaxEven() {
        T max1 = -1, max2 = -1;

        for (int i = 0; i < this->currentSize; i++) {
            T val = this->arr[i];

            if (val % 2 == 0) {
                if (val > max1) {
                    max2 = max1;
                    max1 = val;
                }
                else if (val > max2 && val != max1) {
                    max2 = val;
                }
            }
        }

        return max2;
    }

    // 3️⃣ Second Minimum Odd
    T secondMinOdd() {
        T min1 = 999999, min2 = 999999;

        for (int i = 0; i < this->currentSize; i++) {
            T val = this->arr[i];

            if (val % 2 != 0) {
                if (val < min1) {
                    min2 = min1;
                    min1 = val;
                }
                else if (val < min2 && val != min1) {
                    min2 = val;
                }
            }
        }

        return min2;
    }

    // 4️⃣ Print Duplicates
    void printDuplicates() {
        bool found = false;

        for (int i = 0; i < this->currentSize; i++) {
            int count = 0;

            for (int j = 0; j < this->currentSize; j++) {
                if (this->arr[i] == this->arr[j])
                    count++;
            }

            if (count > 1) {
                bool alreadyPrinted = false;

                for (int k = 0; k < i; k++)
                    if (this->arr[k] == this->arr[i])
                        alreadyPrinted = true;

                if (!alreadyPrinted) {
                    cout << this->arr[i] << " ";
                    found = true;
                }
            }
        }

        if (!found)
            cout << "No duplicates found";

        cout << endl;
    }

    // 5️⃣ Rotate Clockwise (Half wise)
    void rotateClockwise(int r) {
        int mid = this->currentSize / 2;

        for (int k = 0; k < r; k++) {

            // First half
            T temp1 = this->arr[mid - 1];
            for (int i = mid - 1; i > 0; i--)
                this->arr[i] = this->arr[i - 1];
            this->arr[0] = temp1;

            // Second half
            T temp2 = this->arr[this->currentSize - 1];
            for (int i = this->currentSize - 1; i > mid; i--)
                this->arr[i] = this->arr[i - 1];
            this->arr[mid] = temp2;
        }
    }

    // 6️⃣ Rotate AntiClockwise (Half wise)
    void rotateAntiClockwise(int r) {
        int mid = this->currentSize / 2;

        for (int k = 0; k < r; k++) {

            // First half
            T temp1 = this->arr[0];
            for (int i = 0; i < mid - 1; i++)
                this->arr[i] = this->arr[i + 1];
            this->arr[mid - 1] = temp1;

            // Second half
            T temp2 = this->arr[mid];
            for (int i = mid; i < this->currentSize - 1; i++)
                this->arr[i] = this->arr[i + 1];
            this->arr[this->currentSize - 1] = temp2;
        }
    }
};

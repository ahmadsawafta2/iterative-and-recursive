#include <iostream>
#include <chrono>
using namespace std;

long long CSE_Fun(long long n) {
    long long fact = 1;
    for (long long i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    long long n, repetitions = 1000000; //تكرار العمليه عشان اقدر ابين الوقت اللازم لتنفيذ العملبه
    cout << "Enter a number: ";
    cin >> n;
    auto start = chrono::high_resolution_clock::now();

    for (long long i = 0; i < repetitions; i++) {
        CSE_Fun(n);
    }


    auto end = chrono::high_resolution_clock::now();

    auto total_duration = chrono::duration_cast<chrono::microseconds>(end - start);

    
    double avg_time = total_duration.count() / static_cast<double>(repetitions);

    cout << "Factorial calculated (repeated " << repetitions << " times)." << endl;
    cout << "Average time per call: " << avg_time << " microseconds" << endl;

    return 0;
}

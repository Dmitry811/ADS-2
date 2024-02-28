// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double iCount = 1;
    for (uint16_t i = 1; i <= n ; i++) {
        iCount *= value;
    }
    return iCount;
}

uint64_t fact(uint16_t n) {
    uint64_t iCount1 = 1;
    for (uint16_t i = 1; i <= n; i++) {
        iCount1 *= i;
    }
    return iCount1;
}

double calcItem(double x, uint16_t n) {
    return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
    double ex = 1;
    for (uint16_t i = 1; i <= count; ++i) {
        ex += calcItem(x, i);
    }
    return ex;
}

double sinn(double x, uint16_t count) {
    double iCount3 = 0;
    int chet = 1;
    for (uint16_t i = 1; i <= count; i++) {
        iCount3 += (i % 2 == 0 ? -1 : 1) * (pown(x, chet) / fact(chet));
        chet += 2;
    }
    return iCount3;
}

double cosn(double x, uint16_t count) {
    double iCount4 = 1;
    int chet1 = 2;
    for (uint16_t i = 1; i <= count; i++) {
        iCount4 += (i % 2 == 0 ? 1 : -1) * (pown(x, chet1) / fact(chet1));
        chet1 += 2;
    }
    return iCount4;
}

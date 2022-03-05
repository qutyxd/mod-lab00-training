// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t answer = x;
    for (uint16_t i = 0; i < n - 1; i++) {
        answer = answer * x;
    }
    return answer;
}

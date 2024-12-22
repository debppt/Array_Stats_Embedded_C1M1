/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <implementation of some functions on array to gain insights about data>
 *
 * <we write functions to find mean, median, maximum, minimum of an array, to ***print the array and to sort the array >
 *
 * @author <DEBANGSHU PATNAIK>
 * @date <22-12-2024>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// function declarations
void print_statistics(char* arr, int n);
void print_array(char* arr, int n);
unsigned char find_median(char* arr, int n);
unsigned char find_mean(char* arr, int n);
unsigned char find_maximum(char* arr, int n);
unsigned char find_minimum(char* arr, int n);
void sort_array(char* arr, int n);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    printf("Array before sorting:\n");
    print_array(test, SIZE);

    printf("\n\nStatistics:\n");
    print_statistics(test, SIZE);

    printf("\nArray after sorting:\n");
    sort_array(test, SIZE);
    print_array(test, SIZE);

}

//function defintions
void print_statistics(char* arr, int n) {
    unsigned char a = find_median(arr, n);
    unsigned char b = find_mean(arr, n);
    unsigned char c = find_maximum(arr, n);
    unsigned char d = find_minimum(arr, n);
    printf("Median: %u\nMean: %u\nMaximum: %u\nMinimum: %u\n", a, b, c, d);
}

void print_array(char* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%u ", (unsigned char)arr[i]);
    }
    printf("\n");
}

unsigned char find_median(char* arr, int n) {
    char temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    sort_array(temp, n);
    if (n % 2 == 0) {
        return (unsigned char)((temp[n / 2 - 1] + temp[n / 2]) / 2);
    } else {
        return (unsigned char)(temp[n / 2]);
    }
}

unsigned char find_mean(char* arr, int n) {
    unsigned int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (unsigned char)arr[i];
    }
    return (unsigned char)(sum / n);
}

unsigned char find_maximum(char* arr, int n) {
    unsigned char max = (unsigned char)arr[0];
    for (int i = 1; i < n; i++) {
        if ((unsigned char)arr[i] > max) {
            max = (unsigned char)arr[i];
        }
    }
    return max;
}

unsigned char find_minimum(char* arr, int n) {
    unsigned char min = (unsigned char)arr[0];
    for (int i = 1; i < n; i++) {
        if ((unsigned char)arr[i] < min) {
            min = (unsigned char)arr[i];
        }
    }
    return min;
}

void sort_array(char* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((unsigned char)arr[i] < (unsigned char)arr[j]) {//Desc order
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

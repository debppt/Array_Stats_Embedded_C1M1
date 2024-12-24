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
 * @file stats.h
 * @brief Contains the declarations of the functions used in stats.c file
 *
 * <We create functions which calculate statistics like mean, median,max,min of ** an array,print the array and sort the array>
 *
 * @author DEBANGSHU PATNAIK
 * @date 22-12-2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief <finds some statistics on the given array and prints them>
 *
 * <finds mean, median, maximum and minimum of array and prints them>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <void> <justs print the statistics so no return data>
 */
void print_statistics(char* arr, int n) {
    unsigned char a = find_median(arr, n);
    unsigned char b = find_mean(arr, n);
    unsigned char c = find_maximum(arr, n);
    unsigned char d = find_minimum(arr, n);
    printf("Median: %u\nMean: %u\nMaximum: %u\nMinimum: %u\n", a, b, c, d);
}

/**
 * @brief <Prints the array>
 *
 * <Prints the array>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <void> <just prints the array so no return data>
 */
void print_array(char* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%u ", (unsigned char)arr[i]);
    }
    printf("\n");
}

/**
 * @brief <Finds median of array>
 *
 * <Middle element of sorted array in case of odd number of elements or **average of two middle elements in case of even number of elements is returned. >
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <unsigned char> <returns a unsigned char value, the median>
 */
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

/**
 * @brief <Finds mean of the array>
 *
 * <Mean is the average of all elements in the array which is found by the **division of sum of all numbers by total number of elements in array>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <unsigned char> <returns a unsigned char value, the mean>
 */
unsigned char find_mean(char* arr, int n) {
    unsigned int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (unsigned char)arr[i];
    }
    return (unsigned char)(sum / n);
}

/**
 * @brief <Finds maximum element in array>
 *
 * <Finds biggest number in the given array>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <unsigned char> <returns the unsigned char value, the maximum element>
 */
unsigned char find_maximum(char* arr, int n) {
    unsigned char max = (unsigned char)arr[0];
    for (int i = 1; i < n; i++) {
        if ((unsigned char)arr[i] > max) {
            max = (unsigned char)arr[i];
        }
    }
    return max;
}

/**
 * @brief <Finds minimum element in array>
 *
 * <Finds smallest number in the given array>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <unsigned char> <returns the unsigned char value, the minimum element>
 */
unsigned char find_minimum(char* arr, int n) {
    unsigned char min = (unsigned char)arr[0];
    for (int i = 1; i < n; i++) {
        if ((unsigned char)arr[i] < min) {
            min = (unsigned char)arr[i];
        }
    }
    return min;
}

/**
 * @brief <returns the sorted array>
 *
 * <prints the elements of the array after sorting in a descending order>
 *
 * @param <char * arr> <char pointer to the beginning of array>
 * @param <int n> <n is the size of array we are working with>
 *
 * @return <void> <sorts the array given so no return data>
 */
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

#endif /* __STATS_H__ */

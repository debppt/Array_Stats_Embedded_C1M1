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
void print_statistics(char* arr, int n);

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
void print_array(char* arr, int n);

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
unsigned char find_median(char* arr, int n);

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
unsigned char find_mean(char* arr, int n);

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
unsigned char find_maximum(char* arr, int n);

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
unsigned char find_minimum(char* arr, int n);

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
void sort_array(char* arr, int n);

#endif /* __STATS_H__ */

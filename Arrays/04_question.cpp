// Given two arrays a[] and b[] at same size. Your task is to find the minimun sum of two elements such that they belong to different arrays and are not at the same index.

// Algorithm:

// 1. If indexes of minA and minB are not the same, return minA + minB.
// 2. Else find second minimum elements from two arrays. Let these elements be minA2 and minB2.
//      Return min (minA + minB2, minA2 + minB)
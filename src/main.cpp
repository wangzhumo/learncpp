#include "../includes/sorts/sort_test_helper.h"
#include "../includes/sorts/select_sort.h"
#include "../includes/sorts/insert_sort.h"
#include "../includes/sorts/merge_sort.h"
#include "../includes/sorts/quick_sort.h"


template<typename T>
void selectSort(T arr[], int n) {
    auto selectSort = new SelectionSort<int>();
    selectSort->selectionSort(arr, n);
    delete (selectSort);
}

template<typename T>
void insertSort(T arr[], int n) {
    auto insert = new InsertionSort<int>();
    insert->insertionSort(arr, n);
    delete insert;
}

template<typename T>
void insertSortDecSwap(T arr[], int n) {
    auto insert = new InsertionSort<int>();
    insert->insertionSortDecSwap(arr, n);
    delete insert;
}

template<typename T>
void mergeSort(T arr[], int n) {
    auto merge = new MergeSort<int>();
    merge->mergeSortBU(arr, n);
    delete merge;
}

template<typename T>
void quickSort(T arr[], int n) {
    auto merge = new QuickSort<int>();
    merge->quickSort(arr, n);
    delete merge;
}

template<typename T>
void quickSortDouble(T arr[], int n) {
    auto quick = new QuickSort<int>();
    quick->quickSortDouble(arr, n);
    delete quick;
}


int main() {
    int n = 1000000;
    int *arrayA = SortTestHelper::generateRandomArray(n, 0, n);
    int *arrayB = SortTestHelper::copyIntArray(arrayA, n);
    int *arrayC = SortTestHelper::copyIntArray(arrayA, n);
    int *arrayD = SortTestHelper::copyIntArray(arrayA, n);

    //SortTestHelper::testSort("Selection Sort", selectSort, arrayA, n);
    //SortTestHelper::testSort("Insertion Sort", insertSortDecSwap, arrayB, n);
    SortTestHelper::testSort("MergeBu   Sort", mergeSort, arrayB, n);
    SortTestHelper::testSort("Quick     Sort", quickSort, arrayC, n);
    SortTestHelper::testSort("Quick Double Sort", quickSortDouble, arrayD, n);
    delete[] arrayA;
    delete[] arrayB;
    delete[] arrayC;
    delete[] arrayD;
    return 0;
}
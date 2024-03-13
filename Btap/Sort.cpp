#include <iostream>
#include <time.h>
#include <algorithm>
#include <cstdlib>

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void print(int a[], int l, int r) {
    for(int i =l; i <= r; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// selectionSort

void selectionSort(int a[], int n) {
    for(int i = 0; i < n-1; ++i) {
        int ind = i;
        for(int j = i+1; j < n; ++j) {
            if(a[ind] > a[j]) ind = j;
        }
        swap(a[ind], a[i]);
    }
}

//insertionSort

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; ++i) {
        int tmp = a[i];
        int ind = i-1;
        while(ind >= 0 && a[ind] > tmp) {
            a[ind+1] = a[ind];
            ind--;
        }
        a[ind+1] = tmp;
    }
}

//bubbleSort

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

//quickSort

int chonChot(int a[], int l, int h) {
    int chot = a[h];
    int left = l, right = h-1;
    while(true) {
        while(left <= right && a[left] < chot) left++;
        while(right >= left && a[right] > chot) right--;
        if(right < left) break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[h]);
    return left;
}

void quickSort(int a[], int l, int h) {
    if(l < h) {
        int chot = chonChot(a, l, h);
        quickSort(a, l, chot-1);
        quickSort(a, chot+1, h);
    }
}

//mergeSort

void merge(int a[], int l, int r) {
    int m = (l+r)/2;
    int n1 = m-l+1, n2 = r-m;

    int x1[m-l+1], x2[r-m];

    for(int i = 0; i < n1; ++i) {
        x1[i] = a[l+i];
    }
    for(int j = 0; j < n2; ++j) {
        x2[j] = a[m+1+j];
    }

    int i = 0;
    int j = 0;
    int ind = l;

    while(i < n1 && j < n2) {
        if(x1[i] <= x2[j]) {
            a[ind] = x1[i];
            ind++;
            i++;
        }
        else {
            a[ind] = x2[j];
            j++;
            ind++;
        }
    }

    while(i < n1) {
        a[ind] = x1[i];
        i++;
        ind++;
    }

    while(j < n2) {
        a[ind] = x2[j];
        j++;
        ind++;
    }
}

void mergeSort(int a[], int l, int r) {
    if( l < r) {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, r);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int min = 0, max = 100000;
    for(int i = 0; i < n; ++i) {
        a[i] = n-i;
    }
    clock_t begin = clock();
    mergeSort(a, 0, n-1);
    clock_t end = clock();
    cout << "s " << (float)(end-begin)/CLOCKS_PER_SEC << endl;

}

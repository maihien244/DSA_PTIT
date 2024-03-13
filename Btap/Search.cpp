#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

int sequentialSearch(int x[], int n, int k) {
     for(int i = 0; i < n; ++i) {
          if(x[i] == k) return i;
     }
     return -1;
}

int binarySearch(int x[], int n, int k) {
     int left = 0, right = n-1;
     int mid;
     while(left <= right) {
          mid = (left+right)/2;
          if(x[mid] == k) return mid;
          if(x[mid] < k) {
               left = mid+1;
          } else {
               right = mid-1;
          }
     }
     return -1;
}

int tripleSearch(int x[], int n, int k) {
     int left = 0, right = n-1;
     int mid1, mid2;
     while(left <= right) {
          mid1 = left + (right-left)/3;
          mid2 = left + 2*(right-left)/3;
          if(x[mid1] == k) return mid1;
          if(x[mid2] == k) return mid2;
          if(x[mid1] < k) left = mid1+1;
          if(x[mid2] > k) right = mid2-1;
     }
     return -1;
}

int interpolationSearch(int x[], int n, int k) {
     int low = 0, high = n-1;
     int pivot;
     while(x[low] <= k && x[high] >= k) {
          pivot = low + ((k-x[low])*(high-low)/(x[high]-x[low]));
          if(x[pivot] == k) return pivot;
          if(x[pivot] < k) low = pivot+1;
          if(x[pivot] > k) high = pivot-1;
     }
     return -1;
}

int min(int x, int y) {
    return (x <= y) ? x : y;
}

int fibMonaccianSearch(int arr[], int x, int n) {
    int fibMm2 = 0; // (m-2)'th Fibonacci Number
    int fibMm1 = 1; // (m-1)'th Fibonacci Number
    int fibM = fibMm2 + fibMm1; // m'th Fibonacci Number

    // Tìm số Fibonacci nhỏ nhất lớn hơn hoặc bằng n
    while (fibM < n) {
        fibMm2 = fibMm1;
        fibMm1 = fibM;
        fibM = fibMm2 + fibMm1;
    }

    int offset = -1; // Khởi tạo offset

    while (fibM > 1) {
        // Kiểm tra phần tử cuối của khoảng mà fibMm2 đang bao phủ
        int i = min(offset + fibMm2, n - 1);

        if (arr[i] < x) {
            // Di chuyển ba biến Fibonacci xuống một Fibonacci
            fibM = fibMm1;
            fibMm1 = fibMm2;
            fibMm2 = fibM - fibMm1;
            offset = i;
        } else if (arr[i] > x) {
            // Di chuyển ba biến Fibonacci xuống hai Fibonacci
            fibM = fibMm2;
            fibMm1 = fibMm1 - fibMm2;
            fibMm2 = fibM - fibMm1;
        } else {
            // Phần tử được tìm thấy
            return i;
        }
    }

    // Kiểm tra phần tử cuối cùng (nếu còn lại)
    if (fibMm1 && arr[offset + 1] == x) {
        return offset + 1;
    }

    // Không tìm thấy
    return -1;
}


int main() {
     int n;
     cin >> n;
     int x[n];
     for(int i = 0; i < n; ++i) x[i] = i+1;
     clock_t begin = clock();
     sequentialSearch(x, n, 90000);
     clock_t end = clock();
     cout << begin << endl << end << endl;
     cout << (end-begin)/CLOCKS_PER_SEC << endl;
}
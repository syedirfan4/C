#include<stdio.h>
int binsearch(int x, int v[], int n)
  {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
      mid = (low+high)/2;
      if (x < v[mid])
        high = mid - 1;
      else if (x > v[mid])
        low = mid + 1;
      else /* found match */
        return mid;
    }
    return -1; /* no match */
  }
int main(){
  /* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
  

  int x = 7;
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int k = binsearch(7,a,10);
  printf("%d",k);
}
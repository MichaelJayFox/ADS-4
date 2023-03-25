// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int cntt = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value)
                cnt++;
        }
}
int countPairs2(int *arr, int len, int value) {
  int cnt = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len -1; i < j; j--) {
      if (arr[i] + arr[j] == value)
        cnt+=1;
    }
  }
  return c;
}
int countPairs3(int *arr, int len, int value) {
  int cnt = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i, right = len;
    while (1 < right - left) {
      int m = (left + right) / 2;
      if (arr[i] + arr[m] == value) {
          cnt++;
          int t = m + 1;
        while (arr[i] + arr[t] == value && t < right) {
          cnt++;
          t++;
        }
        t = m - 1;
        while (arr[i] + arr[t] == value && t > left) {
          cnt++;
          t--;
        }
        break;
      }
      if (arr[i] + arr[m] > value) {
        right = m;
      } else {
        left = m;
      }
    }
  }
  return cnt;
}

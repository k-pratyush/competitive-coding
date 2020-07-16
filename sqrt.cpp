int mySqrt(int x) {
    int left, right;
    if(x < 2) {
        return x;
    }
    left = 1;
    right = x;
    int mid;
    while(left < right) {
        mid = left + (right - left+1)/2;
        if(mid <= x/mid) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

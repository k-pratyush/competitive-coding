char nextGreatestLetter(vector<char>& letters, char target) {
    int left = 0;
    int right = letters.size();
    int mid;
    char res = '#';
    while(left <= right) {
        mid = left + (right - left)/2;
        if(letters[mid] == target) {
            left = mid + 1;
        } else if(letters[mid] > target) {
            res = letters[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if(res == '#') {
        return letters[0];
    }
    return res;
}

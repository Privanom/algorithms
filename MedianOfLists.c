double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int combSize = nums1Size + nums2Size;
    int temp[combSize];
    int x = 0;
        for (int i = 0; i < nums1Size+nums2Size; i++) {
            if (i < nums1Size) {
                temp[i] = nums1[i];
            } else {
                temp[i] = nums2[x];
                x++;
            }
        }
        for (int i = 0; i < nums1Size + nums2Size; i++){
            for (int j = i + 1; j < nums1Size + nums2Size; j++){
                if (temp[i] > temp[j]){
                    int t = temp[i];
                    temp[i] = temp[j];
                    temp[j] = t;
                }
            }
        }
        int l = (nums1Size+nums2Size)/2;
        if ((nums1Size + nums2Size) % 2 == 0){
            return (temp[l] + temp[l+1])/2.0;
        } else {
            return temp[l];
        }
}   
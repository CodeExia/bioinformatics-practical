int binarySearch(int array[], int key, int size)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right-left)/2;
        if (array[mid] < key)
            left = mid + 1;
        else if (array[mid] > key)
            right = mid - 1;
        else
            return mid;
    }

}
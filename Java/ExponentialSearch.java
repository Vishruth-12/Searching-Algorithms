public class ExponentialSearch {
    private static int binarySearch(int[] a, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] == target) return mid;
            if (a[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    public static int search(int[] a, int target) {
        int n = a.length;
        if (n == 0) return -1;
        if (a[0] == target) return 0;
        int bound = 1;
        while (bound < n && a[bound] < target) bound *= 2;
        return binarySearch(a, bound / 2, Math.min(bound, n - 1), target);
    }

    public static void main(String[] args) {
        int[] a = {2, 5, 9, 12, 17, 21, 30};
        int index = search(a, 21);
        System.out.println(index >= 0 ? "Found at index " + index : "Not found");
    }
}

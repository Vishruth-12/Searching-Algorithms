public class BinarySearch {
    public static int search(int[] values, int target) {
        int low = 0, high = values.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (values[mid] == target) return mid;
            if (values[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] values = {2, 5, 9, 12, 17, 21, 30};
        int index = search(values, 17);
        System.out.println(index >= 0 ? "Found at index " + index : "Not found");
    }
}

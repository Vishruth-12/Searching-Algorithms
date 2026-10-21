public class InterpolationSearch {
    public static int search(int[] a, int target) {
        int low = 0, high = a.length - 1;
        while (low <= high && target >= a[low] && target <= a[high]) {
            if (a[low] == a[high]) return a[low] == target ? low : -1;
            long numerator = (long) (target - a[low]) * (high - low);
            int pos = low + (int) (numerator / (a[high] - a[low]));
            if (a[pos] == target) return pos;
            if (a[pos] < target) low = pos + 1;
            else high = pos - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] a = {10, 20, 30, 40, 50, 60, 70};
        int index = search(a, 50);
        System.out.println(index >= 0 ? "Found at index " + index : "Not found");
    }
}

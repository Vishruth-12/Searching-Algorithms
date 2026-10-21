public class JumpSearch {
    public static int search(int[] a, int target) {
        int n = a.length;
        if (n == 0) return -1;
        int step = (int) Math.sqrt(n), start = 0, end = step;
        while (start < n && a[Math.min(end, n) - 1] < target) {
            start = end;
            end += step;
            if (start >= n) return -1;
        }
        for (int i = start; i < Math.min(end, n); i++) {
            if (a[i] == target) return i;
            if (a[i] > target) break;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] a = {2, 5, 9, 12, 17, 21, 30};
        int index = search(a, 17);
        System.out.println(index >= 0 ? "Found at index " + index : "Not found");
    }
}

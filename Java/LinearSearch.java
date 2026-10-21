public class LinearSearch {
    public static int search(int[] values, int target) {
        for (int i = 0; i < values.length; i++) {
            if (values[i] == target) return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] values = {4, 8, 15, 16, 23, 42};
        int target = 15;
        int index = search(values, target);
        System.out.println(index >= 0 ? "Found at index " + index : "Not found");
    }
}

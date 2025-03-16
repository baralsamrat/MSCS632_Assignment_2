// Java: Allocating objects on the heap
public class MemoryDemo {
    public static void main(String[] args) {
        // Allocate an array of Integer objects
        Integer[] numbers = new Integer[5];
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = new Integer(i);
        }
        System.out.println("Numbers allocated in Java.");
        // The garbage collector automatically frees memory when objects are no longer referenced.
    }
}

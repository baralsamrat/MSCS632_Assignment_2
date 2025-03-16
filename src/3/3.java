// Java: Allocating objects on the heap
public class MemoryDemo {
    public static void main(String[] args) {
        // Allocate an array of Integer objects
        Integer[] numbers = new Integer[5];
        for (int i = 0; i < numbers.length; i++) {
            // Autoboxing automatically converts int to Integer
            numbers[i] = i;
        }
        System.out.println("Numbers allocated in Java.");
        // The garbage collector automatically frees memory when objects are no longer referenced.
    }
}

// Output
// Numbers allocated in Java.


public class MemoryDemo {
    public static void main(String[] args) throws InterruptedException {
        printMemoryUsage("Start");
        
        // Allocate an array of 1,000,000 integers
        int[] arr = new int[1000000];
        printMemoryUsage("After allocation");
        
        // Remove reference and suggest garbage collection
        arr = null;
        System.gc();
        Thread.sleep(1000);  // Wait for GC to complete
        printMemoryUsage("After deletion");
    }
    
    public static void printMemoryUsage(String note) {
        Runtime runtime = Runtime.getRuntime();
        long usedMemory = (runtime.totalMemory() - runtime.freeMemory()) / (1024 * 1024);
        System.out.println("[" + note + "] Memory usage: " + usedMemory + " MB");
    }
}

// Output
// [Start] Memory usage: 2 MB
// [After allocation] Memory usage: 6 MB
// [After deletion] Memory usage: 2 MB

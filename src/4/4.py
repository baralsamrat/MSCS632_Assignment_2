import os
import psutil
import time

def print_memory_usage(note):
    process = psutil.Process(os.getpid())
    mem = process.memory_info().rss / (1024 * 1024)  # Convert bytes to MB
    print(f"[{note}] Memory usage: {mem:.2f} MB")

print_memory_usage("Start")

# Allocate a large list
arr = [i for i in range(1000000)]
print_memory_usage("After allocation")

# Pause to observe memory before deletion
time.sleep(1)

# Delete the list and force garbage collection
del arr
time.sleep(1)
print_memory_usage("After deletion")

# Ouput
# Start] Memory usage: 103.16 MB
# [After allocation] Memory usage: 141.42 MB
# [After deletion] Memory usage: 105.19 MB

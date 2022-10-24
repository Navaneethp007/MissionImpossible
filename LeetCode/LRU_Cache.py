class DoubleNode:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.next = None
        self.previous = None


class LRUCache:

    def __init__(self, capacity):
        # Initialize class variables
        self.capacity = capacity
        self.cache = {}  # This is for mapping the key to node

        self.head = DoubleNode(0, 0)
        self.tail = DoubleNode(0, 0)
        self.head.next = self.tail
        self.tail.previous = self.head

    # Remove from the list
    def remove(self, node):
        prev = node.previous
        nxt = node.next
        prev.next = nxt
        nxt.previous = prev

    # Insert at the head
    def insert(self, node):
        temp = self.tail.previous
        temp.next = node
        self.tail.previous = node
        node.next = self.tail
        node.previous = temp


    def get(self, key):
        #Retrieve item from provided key. Return -1 if nonexistent.
        if key in self.cache:
            node = self.cache[key]
            self.remove(node)
            self.insert(node)
            return node.value
        return -1


    def set(self, key, value):
        #Set the value if the key is not present in the cache. If the cache is at capacity remove the oldest item.
        node = DoubleNode(key, value)
        self.insert(node)
        self.cache[key] = node
        if len(self.cache) > self.capacity:
            node = self.head.next
            self.remove(node)
            del self.cache[node.key]


our_cache = LRUCache(5)

our_cache.set(1, 1)
our_cache.set(2, 2)
our_cache.set(3, 3)
our_cache.set(4, 4)


print(our_cache.get(1))       # returns 1
print(our_cache.get(2))      # returns 2
print(our_cache.get(9))     # returns -1 because 9 is not present in the cache

our_cache.set(5, 5)
our_cache.set(6, 6)

print(our_cache.get(3))     # returns -1 because the cache reached it's capacity and 3 was the least recently used entry


our_cache = LRUCache(2)
our_cache.set(1, 1)
our_cache.set(1, 8)
our_cache.set(2, 2)
print(our_cache.get(1))  # returns 8
print(our_cache.get(2))  # returns 2
our_cache.set(3, 3)
print(our_cache.get(3))  # returns 3
print(our_cache.get(1))  # returns -1


our_cache = LRUCache(0)
our_cache.set(1, 1)

print(our_cache.get(1))
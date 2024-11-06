
### 1. **HashMap (Java)**
   - A **HashMap** in Java is a part of the Java Collection Framework and is used to store key-value pairs.
   - It uses hashing to store and retrieve data quickly.
   - The **keys** in a HashMap are unique, while **values** can be duplicated.
   - Insertion and retrieval have a time complexity of **O(1)** on average.
   - **Not ordered:** The elements do not maintain any specific order.

### 2. **HashSet (Java)**
   - A **HashSet** is a collection in Java that stores unique elements only (no duplicates).
   - It is backed by a **HashMap** internally, where elements are stored as keys with a dummy value.
   - **No order is maintained.**
   - Basic operations like add, remove, and contains are performed in **O(1)** time on average.

### 3. **unordered_map (C++)**
   - In C++, **unordered_map** is part of the STL and is similar to Java’s HashMap.
   - It stores key-value pairs and uses hashing for quick data access.
   - Average time complexity for insert, delete, and access operations is **O(1)**.
   - **No specific order** of elements, as it’s based on hashing.

### 4. **unordered_set (C++)**
   - An **unordered_set** in C++ is similar to a HashSet in Java.
   - It only stores unique values and uses hashing to enable quick lookup and insertion.
   - Elements are stored in **no particular order**.
   - The average time complexity of operations is **O(1)** due to hashing.


# 🚀 My C++ Logic & Core Engineering Journey

Welcome! This repository serves as a centralized vault for my daily coding progress, structured problem-solving, and logic-driven C++ applications. Every program here focus on handling extreme edge cases, data validation, and modular structure.

---
# 🚀 GSSoC 2026 Journey
**Selected Contributor out of 43,000+ applicants!** 🌟  
🔥 **Promoted to Co-Maintainer / Collaborator for core ecosystem repositories!** 🚀

* **Role:** Co-Maintainer / Collaborator & Core Developer
* **Track:** Open Source Engineering Track
* **Timeline:** 15 May to 14 August 2026
  
* **Core Responsibilities:** * Managing and reviewing incoming Pull Requests (PRs) from global contributors.
  
  * Architecting clean issue structures, templates, and documentation guidelines (e.g., `ARCHITECTURE.md`).
  * Mentoring junior contributors and triaging critical backend/auth workflow bugs.
    
* **Objective:** Actively contributing to real-world open-source projects, optimizing C++ structures, and collaborating with global developers to build scalable infrastructure.


---

### 1. 💳 Fintech Credit & Eligibility System
A modular banking engine built to compute credit eligibility, manage risk thresholds, and dynamically allocate user perks.
* **Smart Risk Management:** Automatically slashes the overall credit limit by **20%** if the user has an active, outstanding loan profile.
* **Strict Input Validation Hooks:** Formatted to instantly reject anomalous data patterns such as negative age, sub-zero income inputs, or corrupted CIBIL score limit boundaries.
* **Dynamic Reward Tier Allocation:** - **Premium Tier:** High-income users with excellent CIBIL records receive a **10% boost** in loyalty/travel reward points.
  - **Growth Tier:** Users with moderate income brackets receive a **5% boost** in specialized travel-centric reward tokens.
  - **Risk Mitigation:** Automatically restricts and downgrades credit limits for profiles falling under unsafe CIBIL tiers to prevent bad debts.

### 2. 🗺️ Smart Routing & Navigation Analytics
A utility algorithm designed to optimize commute decisions based on environment variables and energy metrics.
* **Energy Analytics:** Processes active fuel levels or vehicle battery parameters to evaluate and explicitly trigger immediate refueling/recharging alerts.
* **Adaptive Routing Engine:** Analyzes real-time weather datasets and atmospheric hazards to dynamically shift, update, and reroute the user via optimized paths.

### 3. 🧮 Multi-Functional Mathematics & Calculator Engine
A comprehensive math compilation designed to handle precise arithmetic algorithms and strict geometric coordinate computations.
* **Standard Arithmetic:** Securely handles addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`) structures for positive integer and floating-point datasets.
* **Geometric Coordinate Module:** Evaluates and delivers both **Area** and **Perimeter/Circumference** constraints seamlessly:
  - **Circle:** Evaluates exact area ($\pi r^2$) and circumference ($2\pi r$).
  - **Square & Rectangle:** Computes area and perimeter constraints via linear dimension boundaries.
  - **Triangle:** Implements **Heron's Formula** to safely parse multi-case side inputs and aggregate precise area definitions.

### 4. 🎟️ Dynamic Ticket Pricing Matrix
An analytical price processing application tailored to optimize system revenue through demographic parameters.
* Implements dynamic pricing structures that realign base fares based on user age brackets and targeted booking day categories.

### 5. ☕ Automated Beverage Distribution Engine
A console-based simulator designed to process multi-stage beverage customization routines.
* Effectively maps selections between Tea and Coffee, evaluates specialized variants based on user inputs, and computes precise, real-time preparation countdown metrics.

​### 6. ​🛣️  Eco-Toll Tax Calculator
​A smart console application designed to calculate route-based toll fees and environmental taxes using strict if-else logic.

​✨ Highlights

​Route Verification: Filters pricing pipelines based on whether the vehicle is on a National or State Highway.
​Dynamic Eco-Tax: Nested if-else blocks that analyze the vehicle's weight and mileage to compute a custom environmental tax.
​Pure Logical Pipeline: Zero loops, zero switch-cases—just clean, cascading conditional structures to evaluate complex tax brackets instantly.

### 7. 🌐 Cyber Heist - A Story-Based Short RPG Game Engine

A lightweight, high-performance terminal-based mini-RPG game engine built completely from scratch in **C++**. Designed to showcase clean architecture, optimized structural control flow, and strict state management.

## 🚀 Key Highlights & Architecture

### 🛡️ Dynamic Character System
Handles unique operative classes with specific statistical attributes and progression mechanics:
* **Code-Breaker:** Specialized in decryption and bypassing terminal firewall layers.
* **Ghost-Walker:** High stealth capabilities for undetected system infiltration.
* **Cyber-Knight:** Heavy-duty brute-force specialist for bypassing aggressive security countermeasures.

### 🎛️ Intrusion Logic Pipelines
* Features multi-layered security levels using advanced, highly optimized **nested if-else architectures**.
* Simulates real-time hacking decision-making trees that adapt based on character choices and stats.

### 🧠 Advanced State Management
* Implements strict process control flow and error buffering via clean conditional termination (`return 0`).
* Zero manual memory leaks, ensuring lightweight execution that matches C++'s hardware-level speed capabilities.

## 🛠️ Tech Stack & Concepts Used
* **Language:** C++ (Standard ISO C++)
* **Paradigm:** Procedural & Structural Logic Programming
* **Interface:** CLI (Command Line Interface / Terminal-based)
* **Core Concepts:** Multi-layered conditional execution, robust state routing, deterministic memory stack management.

---

## 📈 Quality Assurance & Optimization
- **Active Debugging:** Codes are continuously reviewed and refactored (e.g., `updated_fintech_credit_calculator.cpp`, `updatedsmart_routing.cpp`) to optimize computational complexity and maintain clean naming structures.
- **Data Integrity:** Strict reliance on input validation structures to eliminate buffer issues and negative runtime errors.

- ## 📊 Data Structures Roadmap & Array Integration (In Progress)
Currently stepping into linear data structures to upgrade the existing procedural engines.
### 📈 Algorithmic Problem Solving (Binary Search & Arrays)

## 🗂️ Arrays & Basic Operations

| Problem Name | Core Approach (1-2 Points) | Complexity | Status |
| :--- | :--- | :--- | :--- |
| **Array Reversal** | • Two-pointer technique meeting at the center.<br>• In-place element swapping. | $O(N)$ time<br>$O(1)$ space | Done |
| **Two Sum** | • Linear scanning or element checking target differences.<br>• Array index tracking. | $O(N)$ time<br>$O(1)$ space | Done |
| **First Missing Positive** | • In-Place Cyclic Sort: Iterate and swap positive elements `x` (where $1 \le x \le n$) to their correct index `x - 1`. Non-positive numbers and values $> n$ are ignored.<br>• Linear Scan Verification: Traverse the rearranged array; the first index `i` where `testcase[i] != i + 1` reveals the missing number `i + 1`. If all match, return `n + 1`. | $O(N)$ time<br>$O(1)$ space | Done |
| **Second Largest** | • Sort the array in ascending order to shift the largest element to the end.<br>• Scan backward from `n - 2` and return the first element strictly smaller than the largest. | $O(N \log N)$ time<br>$O(1)$ space | Done |
| Check if Array Is Sorted and Rotated | • Count breakpoints where `nums[i] > nums[(i + 1) % n]`. <br> • Valid if total breakpoint count is at most 1. | O(N) time <br> O(1) space | Done |
| Sum Of Two Arrays | • Process both arrays from right to left using two pointers (`i` and `j`) to compute element-wise sum with `carry`. <br> • Use individual loops to exhaust remaining digits of the longer array and append any leftover carry at the end, then reverse the result. | O(N + M) time <br> O(max(N, M)) space | Done |
| Maximum Occurring Character | &bull; **Frequency Mapping:** Create a 26-sized array initialized to 0. Iterate through the string and map each character using `s[i] - 'a'` to increment its respective count.<br>&bull; **Max Scan:** Loop from index 0 to 25 to track the maximum frequency. Scanning sequentially from 'a' to 'z' naturally handles lexicographically smaller ties. | $O(N)$ time<br>$O(1)$ space | Done |

## ⛓️ Two Pointers Technique

| Problem Name | Core Approach (1-2 Points) | Complexity | Status |
| :--- | :--- | :--- | :--- |
| **Container With Most Water** | • Two-pointer technique meeting at the center.<br>• Area calculation based on width and minimum height.<br>• Moving the smaller pointer inward to maximize potential area. | $O(N)$ time<br>$O(1)$ space | Done |
| **3Sum Closest** | • Sort array and fix the first element using a loop up to `size - 2`.<br>• Use a two-pointer approach (`left` & `right`) with absolute distance `abs()` to track the nearest sum. | $O(N^2)$ time<br>$O(1)$ space | Done |
| **Pair Sum** | • Sort and Setup: Sort the given vector in ascending order to handle internal sorting constraints automatically.<br>• Two-Pointer Traversal: Initialize two pointers `s` at 0 and `e` at `n - 1`. Loop while `s < e` to find matching pairs while handling duplicate element frequencies. | $O(N \log N)$ time<br>$O(1)$ space | Done |
| **Remove Duplicates** | • Two-pointer technique with slow pointer `i` and fast explorer `j`.<br>• In-place element overwriting on mismatch (`nums[j] != nums[i]`). | $O(N)$ time<br>$O(1)$ space | Done |
| **3Sum** | • Sort and Fix: Sort the array in ascending order. Iterate through the array, fixing the first element `nums[i]` one by one, while skipping any consecutive identical elements to avoid duplicate triplets.<br>• Two-Pointer Search: Place a left pointer `j` right after `i` and a right pointer `k` at the end of the array. Move them inward: if `nums[i] + nums[j] + nums[k] == 0`, store the triplet and shift both pointers while skipping duplicates. Otherwise, adjust `j++` or `k--` based on the sum. | $O(N^2)$ time<br>$O(1)$ space | Done |
| **Merge Sorted Array** | • Three-pointer approach tracking indices from the back of arrays.<br>• Backward comparison to fill elements into trailing zeros without extra space. | $O(m + n)$ time<br>$O(1)$ space | Done |
| **Move Zeroes** | • **Two-Pointer Strategy:** Process the array in a single pass using one pointer to track the next non-zero slot and another to scan ahead.<br>• **Partitioning via Swapping:** Dynamically swap non-zero elements into the tracker slot to push all zeros to the end while preserving relative order. | $O(N)$ time<br>$O(1)$ space | Done |
| **Rotate Array** | • **Modulo Reduction:** Use `k = k % n` to avoid redundant cycles, as rotating an array of size `n` by `n` times returns it to its original state.<br>• **Three-Step Reversal:** Reverse the entire array, then reverse the first `k` elements, and finally reverse the remaining elements using two pointers (`s` and `e`) to position all elements correctly in-place. | $O(N)$ time<br>$O(1)$ space | Done |
| Length of Last Word | &bull; **Skip Trailing Spaces:** Start from the very end of the string (last index) and move backwards, skipping all empty spaces by decrementing the pointer until hitting the first actual character.<br>&bull; **Count Last Word:** Once a character is found, count the letters and move backwards until hitting another space or reaching the beginning of the string. | $O(N)$ time<br>$O(1)$ space | Done |
| Reverse a String (Char Array) | &bull; **Find Length:** Iterate through the character array using a loop until hitting the null character (`'\0'`) to find the total length ($n$).<br>&bull; **Two-Pointer Swap:** Initialize two pointers at the start (`s=0`) and end (`e=n-1`), then swap characters while moving the pointers inward (`s++`, `e--`) until they meet. | $O(N)$ time<br>$O(1)$ space | Done |
| Valid Palindrome | &bull; **Skip & Match:** Use two pointers (`i=0`, `j=n-1`) to move inward. Skip non-alphanumeric characters using `isalnum()`.<br>&bull; **Case-Insensitive Check:** Convert valid characters to lowercase using `tolower()`. If `s[i] != s[j]`, return `false` early; else return `true` after the loop completes. | $O(N)$ time<br>$O(1)$ space | Done |
| **Replace Spaces** | • **Space Optimization:** Count spaces and use `str.resize()` to allocate extra memory beforehand, achieving $O(1)$ auxiliary space.<br>• **Backward Traversal:** Process from right to left using two pointers (`i` and `j`) to fill `@40` without overwriting characters or shifting data. | $O(N)$ time<br>$O(1)$ space | Done |


## 🔍 Binary Search & Advanced Search

| Problem Name | Core Approach (1-2 Points) | Complexity | Status |
| :--- | :--- | :--- | :--- |
| **Mountain Peak** | • Binary search on bitonic (increasing-decreasing) data.<br>• Mid-element comparison with neighbors to find peak. | $O(\log N)$ time<br>$O(1)$ space | Done |
| **Rotated Sorted Search** | • Modified binary search tracking array inflection points.<br>• Identifying which half is strictly monotonic. | $O(\log N)$ time<br>$O(1)$ space | Done |
| **Square Root (BS)** | • Binary search over integer search space $[1, N]$.<br>• Mid-point squaring to match closest target. | $O(\log N)$ time<br>$O(1)$ space | Done |
| **Book Allocation** | • Binary search over answer range (`max element` to `total sum`).<br>• Greedy continuous allocation check for each mid-value. | $O(N \log(\sum \text{pages}))$ time<br>$O(1)$ space | Done |
| **Painter Partition** | • Binary search over answer range (`max element` to `total sum`).<br>• Greedy continuous allocation check for each mid-value. | $O(N \log(\text{sum}))$ time<br>$O(1)$ space | Done |
| **Aggressive Cows** | • Binary search over answer range `[0, max_stall - min_stall]`.<br>• Greedy placement of cows to check if minimum distance `mid` is possible. | $O(N \log(\text{maxStall} - \text{minStall}))$ time<br>$O(1)$ space | Done |
| **Median of Two Sorted Arrays** | • Binary search on partitions of the smaller array to find a balanced split.<br>• Edge handling via `INT_MIN / INT_MAX` to align left and right half elements. | $O(\log(\min(m, n)))$ time<br>$O(1)$ space | Done |
---

### 🧠 Critical Boundary Checks Covered
* **Rotated Arrays:** Always locate the sorted subarray boundary before reducing the search space.
* **Book Allocation:** Set $low = \max(\text{array})$ to handle the edge case where a single heavy book exceeds the mid-limit.


### 🎒 Core Array Concepts Learned:
- **Fixed Memory Allocation:** Understanding contiguous memory blocks in C++.
- **Index-Based Access:** $O(1)$ time complexity for direct element retrieval.
- **Bound Checking:** Preventing segmentation faults and buffer overflows.

### 🔄 Planned System Upgrades:
- [ ] **Fintech Engine v2:** Implement `std::array<int, 100>` to batch-process CIBIL scores and filter high-risk profiles in a single execution pass.
- [ ] **Cyber Heist RPG:** Store operative inventory items and security firewall layers inside a structural array for sequential decryption loops.



# Wallbreakers Assignment Week #2 (due by EOD Friday, July 5th)


## Goals For This Week
Hash maps and hash sets are arguably the most important data structures you will need for coding interviews, as you might have noticed this during our first mock interview. They come up all the time either directly, or indirectly (say as part of memorization, building a graph, etc.). This week we want to make sure you are very comfortable using hash maps and hash sets in your language of choice. You should be able to use them without needing to try to remember or look up the right API or syntax. We will also look at multisets which are a special type of hash maps used for counting occurrences of objects.

## Week 2 Checklist
- [ ] Solve as many of the problems listed below as you can by EOD Friday, July 5th.
- [ ] Complete the weekly progress report form by EOD Friday, July 5th.

## Coding Exercises

### Hash maps and hash sets
- [x] [Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/771.%20Jewels%20and%20Stones/main.cpp)
- [x] [Unique morse code words](https://leetcode.com/problems/unique-morse-code-words/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/804.%20Unique%20Morse%20Code%20Words/main.cpp)
- [x] [Happy number](https://leetcode.com/problems/happy-number/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/202.%20Happy%20Number/main.cpp)
- [x] [Uncommon words from two sentences](https://leetcode.com/problems/uncommon-words-from-two-sentences/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/884.%20Uncommon%20words%20from%20two%20sentences/main.cpp)
- [x] [Distribute candies](https://leetcode.com/problems/distribute-candies/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/575.%20Distribute%20Candies/main.cpp)
- [ ] [Group of special equivalent strings](https://leetcode.com/problems/groups-of-special-equivalent-strings/)
- [x] [Intersection of two arrays](https://leetcode.com/problems/intersection-of-two-arrays/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/349.%20Intersection%20of%20Two%20Arrays/main.cpp)
- [x] [Valid sudoku](https://leetcode.com/problems/valid-sudoku/) [(Solution)](https://github.com/amarsgithub/Wallbreakers/blob/master/Week%202%20-%20hashmaps%2C%20sets%2C%20multisets%2C%20tries/36.%20Valid%20Sudoku/main.cpp)
- [ ] [Isomorphic strings](https://leetcode.com/problems/isomorphic-strings/)
- [ ] [Word pattern](https://leetcode.com/problems/word-pattern/)
- [ ] [Design hashmap](https://leetcode.com/problems/design-hashmap/)
- [ ] [Design hashset](https://leetcode.com/problems/design-hashset/)

### Multisets
- [ ] [Find all anagrams in a string](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
    - Use a multiset for this one. You can also solve it without using one. How? Try to solve it both ways. How do the two solutions compare?
- [ ] [Find all unique characters in a string](https://leetcode.com/problems/first-unique-character-in-a-string/)
- [ ] [Subdomain visit count](https://leetcode.com/problems/subdomain-visit-count/)
- [ ] [Find the difference](https://leetcode.com/problems/find-the-difference/)
- [ ] [Most common word](https://leetcode.com/problems/most-common-word/)
- [ ] [Sort characters by frequency](https://leetcode.com/problems/sort-characters-by-frequency/)
- [ ] [Set mismatch](https://leetcode.com/problems/set-mismatch/)
    - This one has a few “clever” solutions but feel free to use a simple multiset solution.
- [ ] [Number of atoms](https://leetcode.com/problems/number-of-atoms/)
    - This one is more difficult than the average interview question but it is good exercise! You will need to build a simple parser in addition to using a multiset.

### Tries
- [ ] [Longest word in dictionary](https://leetcode.com/problems/longest-word-in-dictionary)
- [ ] [Implement trie prefix tree](https://leetcode.com/problems/implement-trie-prefix-tree)
- [ ] [Word Search II](https://leetcode.com/problems/word-search-ii)

## Resources
* Python Resources
    * [Tutorial on dictionaries in Python (hash maps)](https://www.datacamp.com/community/tutorials/python-dictionary-tutorial)
    * [Bonus: Learn how and when to use defaultdict in Python to speed up your coding](https://www.accelebrate.com/blog/using-defaultdict-python/)
    * [Tutorial on sets in Python (hash sets)](https://www.datacamp.com/community/tutorials/sets-in-python)
    * [Multisets in Python: The collections.Counter class](https://pymotw.com/2/collections/counter.html)
        * This is a very powerful class to know how to use. Some interview problems can be solved in only a few lines of code if you know how to use this class. Make sure you know how it works and that you could implement an equivalent class if needed. A good exercise would be to implement your own Counter class that imitates collections.Counter using a dictionary as the underlying structure.

* Java Resources
    * [HashMap in Java](https://www.callicoder.com/java-hashmap/)
    * [HashSet in Java](https://www.baeldung.com/java-hashset)
    * Multisets: Unfortunately Java does not come with a multiset class. You will have to use a HashMap<T, Integer> and manually implement any of the multiset operations you need. (For real-world applications, you can use Google's Guava library which comes with a [multiset class](https://google.github.io/guava/releases/16.0/api/docs/com/google/common/collect/Multiset.html) but I do not recommend using this for coding interviews as interviewers are likely to be unfamiliar with it, and you are generally expected to only use standard language features and libraries only.)

* Tries
    * https://www.geeksforgeeks.org/trie-insert-and-search/
    * https://medium.com/@info.gildacademy/a-simpler-way-to-implement-trie-data-structure-in-python-efa6a958a4f2
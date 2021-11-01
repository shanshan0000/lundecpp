## design parking system
- With Exception Handling

## check if all characters have equal number of occurrences
- Could use unordered_map + set

## Iterator design model

https://leetcode.com/problems/iterator-for-combination/discuss/1509630

https://leetcode.com/problems/iterator-for-combination/discuss/1521899

https://leetcode.com/problems/flatten-nested-list-iterator/discuss/1530241/

https://leetcode.com/problems/flatten-nested-list-iterator/discuss/1509179/

## to lower case

https://leetcode.com/problems/to-lower-case/discuss/1515360

## reverse string
- swap function, passing by pointer, passing by reference

```c++
for(auto it1 = str.begin(); it1 != str.end(); ++it1)
    for(auto it2 = str.rbegin(); it2 != str.rend(); ++it2)
        if(it1 != it2)
            swap(it1, it2);
```


## Comparator & Sorting

https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/discuss/1511757

https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/discuss/1476589

- https://leetcode.com/problems/sorting-the-sentence/discuss/1516239/ 
- https://leetcode.com/problems/sorting-the-sentence/discuss/1530870/
- Could use set instead of vector


https://leetcode.com/problems/sort-array-by-increasing-frequency/discuss/1529350/

## leetcode 1476 : subrectangle queries

```c++
class Matrix{
	public:
	Matrix(vector<vector<int>> _m):m(_m){}
	vector<vector<int>> m;
	void print_matrix();
}

 ```


```c++
void print_matrix(){
	for(auto it_i = m.begin(); it_i != m.end(); ++ it_i) {
        for (int j = 0; j <= 2; j++)
            cout << (*it_i)[j] << " ";
        cout << endl;
    }
}
 ```


```c++
void print_matrix(){
	for(int i = 0; i <= 2; i ++) {
        for (auto it_j = m[i].begin(); it_j != m[i].end(); ++ it_j)
            cout << *it_j << " ";
        cout << endl;
    }
}
 ```



```c++
void print_matrix(){
	for(auto it_i = m.begin(); it_i != m.end(); ++ it_i) {
        for (auto it_j = (*it_i).begin(); it_j != (*it_i).end(); ++ it_j)
            cout << *it_j << " ";
        cout << endl;
    }
}
 ```

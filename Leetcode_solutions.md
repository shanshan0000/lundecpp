## Hashmap

## Iterator design model

https://leetcode.com/problems/iterator-for-combination/discuss/1509630

https://leetcode.com/problems/iterator-for-combination/discuss/1521899

https://leetcode.com/problems/flatten-nested-list-iterator/discuss/1530241/

https://leetcode.com/problems/flatten-nested-list-iterator/discuss/1509179/

## String

https://leetcode.com/problems/to-lower-case/discuss/1515360

## Comparator & Sorting

https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/discuss/1511757

https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/discuss/1476589

- https://leetcode.com/problems/sorting-the-sentence/discuss/1516239/ 
- https://leetcode.com/problems/sorting-the-sentence/discuss/1530870/
- Could use set instead of vector


https://leetcode.com/problems/sort-array-by-increasing-frequency/discuss/1529350/


## Misc 

#### leetcode-1476 
https://leetcode.com/problems/subrectangle-queries/

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

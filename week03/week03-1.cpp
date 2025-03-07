//week03-1.cpp 二合一的 C++版本
//LeetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {

        long long ans=n; //要多寫這行，把數字升級，便64位元「很長很長的整數」
        return ans*ans + (ans-1)*(ans-1);  //  C/C++/Java/C#都要加分號
    }
};
